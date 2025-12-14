/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76801
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_4)) || ((_Bool)1))), (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3)))))) || (max(((!(((/* implicit */_Bool) 3526131400872642845LL)))), (((((/* implicit */_Bool) (unsigned char)116)) && (((/* implicit */_Bool) var_10))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = (~(((/* implicit */int) (!(var_9)))));
                                var_18 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_2))))));
                                var_19 = ((((/* implicit */_Bool) max(((+(10040091133682304705ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14)))))))) || (((/* implicit */_Bool) (((+(var_10))) - (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                                var_20 -= min(((((+(3085976695400157283ULL))) | (min((((/* implicit */unsigned long long int) var_12)), (var_2))))), (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */short) var_11))))));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4674888188651915063LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-18519)) || (((/* implicit */_Bool) 1399068546)))))) : (18136845362520395735ULL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max(((unsigned char)162), ((unsigned char)42)));
                                var_23 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((8580898898797342829ULL) + (((/* implicit */unsigned long long int) 1373979366U))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_5)) & (((/* implicit */int) var_5)))))) - (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_8)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */long long int) var_3)) > ((+(6541882159513974667LL)))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((/* implicit */int) (short)6494)))))));
                        var_25 = ((/* implicit */short) (-(((/* implicit */int) var_14))));
                        /* LoopSeq 1 */
                        for (int i_8 = 1; i_8 < 14; i_8 += 3) 
                        {
                            arr_28 [i_0] [i_7] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                            var_26 = ((/* implicit */unsigned int) var_12);
                            var_27 = ((/* implicit */long long int) ((unsigned char) var_5));
                            var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                        }
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)162))));
    var_30 = ((/* implicit */signed char) var_13);
}
