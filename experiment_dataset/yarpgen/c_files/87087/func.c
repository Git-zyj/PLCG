/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87087
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = var_13;
        var_14 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 8895349429095337818LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (0ULL))) : (var_2)));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-2037)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) (short)2036)))));
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16118511764627725647ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((unsigned long long int) 18446744073709551615ULL))));
                    arr_10 [(signed char)17] [i_2 + 3] [i_2] [i_2 - 1] = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6694401369175552901LL)) ? (((/* implicit */unsigned long long int) 1068096071U)) : (2511040567485092414ULL)));
        arr_11 [(unsigned char)12] &= ((/* implicit */int) 8355768623834690299ULL);
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        var_18 += ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)2905))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (short)-11810)) : (((/* implicit */int) (short)-2037))));
                        var_20 += ((/* implicit */unsigned long long int) arr_15 [i_4]);
                    }
                } 
            } 
        } 
        arr_22 [19U] = ((/* implicit */unsigned long long int) (short)28118);
    }
    var_21 -= ((/* implicit */int) var_8);
    var_22 |= ((/* implicit */int) (((_Bool)1) ? (542852057436277279LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15061)))));
}
