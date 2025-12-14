/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83545
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16015)) ? (((/* implicit */int) (short)-4378)) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)65197)) : (((/* implicit */int) (short)11190)))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (short)-11190))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_1] = ((/* implicit */int) ((min((4294967283U), (((/* implicit */unsigned int) (unsigned short)124)))) << (((((((/* implicit */_Bool) (short)11190)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11210))) : (4294967274U))) - (4294956058U)))));
                arr_7 [i_1] = ((((/* implicit */_Bool) (unsigned short)15)) ? (((((/* implicit */_Bool) (short)11190)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-30426)))) : (((/* implicit */int) max(((short)(-32767 - 1)), ((short)-11214)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-17179869183LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -17179869183LL)) ? (5860407890137350032LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-11190)))))) : (((((/* implicit */_Bool) 3634766121U)) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))) ? (((((/* implicit */_Bool) max((17ULL), (4ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (min((2ULL), (18446744073709551611ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20602)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                arr_15 [i_2] [i_3] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) (short)-11165)) ? (15ULL) : (((/* implicit */unsigned long long int) 2147483647)))), (min((((/* implicit */unsigned long long int) (short)558)), (4ULL)))));
                var_15 = ((/* implicit */int) min((max((((((/* implicit */_Bool) -17179869187LL)) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) 511LL)))), (((/* implicit */unsigned long long int) (unsigned char)255)))), (((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (9ULL))) % (((/* implicit */unsigned long long int) 630098645))))));
                arr_16 [i_2] [i_2] = max((((((/* implicit */_Bool) 2060713507U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30790))) : (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1473265626)) ? (2147483647) : (((/* implicit */int) (unsigned char)254))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((18446744073709551592ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2147483640)) >= (5ULL))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)31))))), (1125899906842623ULL))) : (var_2))))));
}
