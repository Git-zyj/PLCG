/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86376
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
    var_18 = ((var_5) && ((((!(((/* implicit */_Bool) -102428652)))) && ((!(((/* implicit */_Bool) var_2)))))));
    var_19 = ((/* implicit */long long int) var_3);
    var_20 = ((/* implicit */_Bool) var_4);
    var_21 = ((((/* implicit */int) var_7)) - (((/* implicit */int) var_15)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_22 = ((/* implicit */_Bool) var_4);
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            arr_7 [i_1] [i_1] = var_7;
            var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (388595464) : (-1387150727)));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) var_11);
                    var_25 = ((/* implicit */int) ((var_4) != (arr_9 [i_1 + 3] [i_1 + 3] [i_3 + 1])));
                    var_26 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_3 + 1]))));
                    var_27 = ((/* implicit */signed char) var_9);
                    arr_12 [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (short)-11489)) ? (((/* implicit */int) (short)-4710)) : (((/* implicit */int) (short)-4709))))));
                }
                for (unsigned int i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-4698))));
                    var_29 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_2] [i_4 - 2] [i_1] [i_2]))));
                    arr_15 [i_0] [i_1] [i_2] [(unsigned char)14] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (arr_4 [i_1])))) ? (4294967293U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1]))))));
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_8) : (((/* implicit */int) arr_8 [i_1 + 2]))));
                    var_31 = ((/* implicit */long long int) ((((var_13) / (arr_5 [i_1] [i_2] [i_1]))) > (var_4)));
                }
                arr_19 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_6 [i_1] [i_1 + 4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_32 = ((/* implicit */short) (-((+(((/* implicit */int) var_6))))));
                arr_20 [i_0] [i_1] = ((/* implicit */short) ((arr_11 [i_1] [i_1 + 2] [i_1] [i_1]) ? (((/* implicit */int) arr_8 [i_1 + 3])) : (((/* implicit */int) arr_17 [i_0] [i_1 + 1] [i_1 - 1] [i_1]))));
            }
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_8))));
                var_34 = (short)-13555;
            }
        }
    }
    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_35 ^= ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) var_16)), (((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_2 [i_7] [i_7]))))))) & (((((/* implicit */_Bool) (unsigned char)151)) ? (-2014188780744214643LL) : ((-9223372036854775807LL - 1LL))))));
        var_36 = ((/* implicit */short) (~(((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */int) min(((short)4709), ((short)4709)))) : ((-(((/* implicit */int) (short)-4725))))))));
        var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((unsigned char) arr_2 [i_7] [i_7]))), (var_17)));
    }
}
