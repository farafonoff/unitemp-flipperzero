/*
    Unitemp - Universal temperature reader
    Copyright (C) 2022-2023  Victor Nikitchuk (https://github.com/quen0n)
    Contributed by divinebird (https://github.com/divinebird)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef UNITEMP_SCD30
#define UNITEMP_SCD30

#include "../unitemp.h"
#include "../Sensors.h"

extern const SensorType SCD30;
/**
 * @brief Выделение памяти и установка начальных значений датчика SCD30
 * @param sensor Указатель на создаваемый датчик
 * @return Истина при успехе
 */
bool unitemp_SCD30_alloc(Sensor* sensor, char* args);

/**
 * @brief Инициализации датчика SCD30
 * @param sensor Указатель на датчик
 * @return Истина если инициализация упспешная
 */
bool unitemp_SCD30_init(Sensor* sensor);

/**
 * @brief Деинициализация датчика
 * @param sensor Указатель на датчик
 */
bool unitemp_SCD30_deinit(Sensor* sensor);

/**
 * @brief Обновление значений из датчика
 * @param sensor Указатель на датчик
 * @return Статус опроса датчика
 */
UnitempStatus unitemp_SCD30_update(Sensor* sensor);

/**
 * @brief Высвободить память датчика
 * @param sensor Указатель на датчик
 */
bool unitemp_SCD30_free(Sensor* sensor);

#endif

#ifndef BYTE_ORDER
#define LITTLE_ENDIAN 1234
#define BIG_ENDIAN    4321
#define BYTE_ORDER    LITTLE_ENDIAN
#endif
