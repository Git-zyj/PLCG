/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83667
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((606333612) <= (606333634))))) - (((((/* implicit */_Bool) -606333631)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))));
                            arr_13 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_5 [i_0 - 3] [i_0 - 1] [2U] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1])))));
                        }
                        var_15 = ((/* implicit */signed char) -606333629);
                        arr_14 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2] [i_1] [i_0 - 1]))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_0 - 1])))) ? (((/* implicit */int) (short)13)) : (((((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 2])) << (((4128768ULL) - (4128753ULL))))))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */_Bool) ((int) arr_16 [i_5] [i_5]));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_25 [i_5] [i_5] [i_5] [i_8]))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_7] [i_7] [i_7] [i_5] [i_5])) ^ (((/* implicit */int) arr_26 [i_5] [i_6] [(_Bool)1] [i_8] [i_9])))))));
                            }
                        } 
                    } 
                    arr_28 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (~(606333612)));
                    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -606333649)) ? (-2117679285) : (2117679285)))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) var_4);
    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1514737168)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */long long int) var_4)) - (143609788069746248LL))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_5)) ? (-606333607) : (((/* implicit */int) (unsigned short)47140)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-10506)))))))));
}
