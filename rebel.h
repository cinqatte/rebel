#ifndef REBEL_H
#define REBEL_H

#define begin {
#define then {
#define done }
#define end }

#define bool int
#define true 1
#define false 0
#define null ((void *)0)
#define nullptr ((void *)0)

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) min(min(a, b), c)
#define max3(a, b, c) max(max(a, b), c)
#define abs(a) ((a) < 0 ? -(a) : (a))
#define sign(a) ((a) < 0 ? -1 : ((a) > 0 ? 1 : 0))
#define floor(a) ((a) < 0 ? ((a) - 1) : (a))
#define ceil(a) ((a) < 0 ? (a) : ((a) + 1))
#define round(a) ((a) < 0 ? ((a) - 0.5) : ((a) + 0.5))
#define clamp(a, _min, _max) max(min((a), (_max)), (_min))

#define squared(a) ((a) * (a))
#define cubed(a) ((a) * (a) * (a))

#define array_size(array) (sizeof(array) / sizeof(array[0]))

#define map(function, array)  for (int i = 0; i < array_size(array); i++) function(array[i])
#define in_range(a, min, max) ((a) >= (min) && (a) <= (max))

#define fun(type, name, ...) type name(VA_ARGS)

#define cast(type, value) ((type)(value))

#define forever for (;;)
#define loop(condition) while (condition)
#define until(condition) while (!(condition))

#define foreach(item, list) for (typeof(*(list)) *item = (list); item < (list) + array_size(list); ++item)

#endif // REBEL_H