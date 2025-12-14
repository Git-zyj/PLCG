/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62468
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((unsigned char) -1199054172);
                        arr_12 [i_0] [i_0] [i_0] [i_3] [7U] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_3 [i_1] [i_2] [i_3]))))) ? (((((/* implicit */_Bool) (short)-12751)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) arr_8 [i_0] [1U] [i_3])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) (short)-12751)))))));
                    }
                    for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        arr_16 [i_0 - 2] [i_1] [i_0] = ((/* implicit */short) ((signed char) min((((((/* implicit */_Bool) (unsigned short)6)) ? (-1427391629) : ((-2147483647 - 1)))), (((/* implicit */int) var_0)))));
                        var_16 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [i_2])) > (2147483647)));
                        var_17 = (signed char)(-127 - 1);
                        var_18 = ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0] [i_0])) + (2147483647))) >> ((~((~(((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_1] [i_2] [i_4]))))))));
                        var_19 = ((/* implicit */unsigned char) arr_7 [i_4] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]);
                    }
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned char) ((short) ((signed char) (unsigned char)101)))))));
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (((unsigned int) 2147483643))))) ? ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)59388)) ? (((/* implicit */int) (short)28524)) : (((/* implicit */int) (unsigned char)102)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-21606)) : (((/* implicit */int) (signed char)-70)))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_1])) : (((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
    } 
    var_21 += ((var_12) % ((~(((/* implicit */int) (unsigned char)255)))));
    /* LoopSeq 1 */
    for (int i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        var_22 |= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21587)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)12751))))) ? (((/* implicit */long long int) 1364317471)) : (min((((/* implicit */long long int) (short)-21606)), (var_7)))));
        var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_5 [i_5] [i_5 - 2] [(short)10])))) % (((/* implicit */int) (short)(-32767 - 1)))))) ? (((((/* implicit */_Bool) arr_18 [i_5])) ? (((((/* implicit */_Bool) (unsigned short)2687)) ? (-391351262) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((short) (short)13283))));
    }
    var_24 *= ((/* implicit */signed char) max((((/* implicit */int) (unsigned char)231)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) (short)18949))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))));
}
