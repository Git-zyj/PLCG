/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69915
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = -9223372036854775781LL;
            var_13 = (-(((/* implicit */int) var_7)));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((var_4), (((/* implicit */long long int) -1502345502))))))) || (((((/* implicit */_Bool) (~(var_2)))) && (((/* implicit */_Bool) (+(1502345516))))))));
        }
        var_15 |= ((/* implicit */int) ((((((/* implicit */long long int) ((arr_2 [i_0] [i_0]) - (-1502345497)))) & (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_1))))) == (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */long long int) arr_0 [i_0]))))));
        var_16 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (signed char)8))))))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) ? (min((((/* implicit */long long int) arr_0 [i_2])), (9223372036854775805LL))) : (((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) 0)) : (arr_6 [i_2]))))))) == (((9366093532163740338ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((/* implicit */_Bool) 1502345493))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) 37889035)))))));
                    var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) (+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2)))))))));
                    arr_15 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_14 [i_2] [i_3] [i_4]) : (((/* implicit */int) var_7))))) ? (var_8) : (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != (arr_3 [i_2] [i_3]))))) & (max((((/* implicit */long long int) arr_14 [i_2] [i_3] [i_4])), (arr_12 [i_4] [i_3] [i_4])))))));
                }
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_5] [i_5]))));
        arr_19 [i_5] = ((/* implicit */_Bool) max((((arr_17 [i_5] [i_5]) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5])))), (((/* implicit */int) (short)-32750))));
        arr_20 [i_5] = (-(((/* implicit */int) arr_4 [i_5])));
        var_20 = ((/* implicit */_Bool) var_10);
        arr_21 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_1)) : (var_6)))))));
    }
    var_21 |= ((/* implicit */long long int) ((var_2) < (((((/* implicit */int) (!(((/* implicit */_Bool) 1956918502U))))) & (2147483647)))));
    var_22 = ((/* implicit */long long int) var_7);
    var_23 = ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (var_4));
}
