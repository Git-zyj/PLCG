/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60566
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
    var_16 *= ((/* implicit */signed char) (~(((((/* implicit */int) var_6)) + ((~(((/* implicit */int) var_15))))))));
    var_17 = ((/* implicit */_Bool) var_14);
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((int) var_14)) << (((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)176)), (var_14)))) ? (((/* implicit */int) var_15)) : (var_9))) + (22514))))))));
    var_19 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_2)) - (44))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_20 *= ((/* implicit */unsigned char) max((arr_3 [11ULL]), (var_8)));
                    arr_8 [(signed char)8] [(_Bool)1] [i_2 - 1] [i_2 + 1] = ((/* implicit */unsigned short) (-((+(arr_6 [i_0] [i_0] [i_2 - 1] [i_2 + 3])))));
                }
            } 
        } 
        arr_9 [5LL] [i_0 + 2] = ((/* implicit */unsigned short) ((var_4) ? (((/* implicit */unsigned int) (+(var_9)))) : (min((min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) var_9)))), (4294967295U)))));
        arr_10 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)82)) ? (min((var_5), (((/* implicit */int) (short)-16)))) : ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        var_21 = (~(((unsigned int) var_11)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)92))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_11))))));
            arr_17 [i_3] [i_3] [i_4] = ((/* implicit */_Bool) var_12);
        }
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            var_23 += ((unsigned short) (+(var_8)));
            arr_22 [i_3] [i_5] = ((/* implicit */int) ((signed char) arr_21 [i_3]));
            arr_23 [i_5] [i_3] [i_3] = ((/* implicit */unsigned short) var_13);
            /* LoopNest 2 */
            for (long long int i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_28 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (+(((long long int) 16787359556258380565ULL))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) ((long long int) (unsigned char)163))) ? (((/* implicit */int) (_Bool)0)) : ((-(arr_6 [i_3] [i_3] [i_3] [(short)9]))))) : (var_14)));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            arr_31 [i_8] [i_5] [i_6 - 1] [i_5] [i_3] = ((/* implicit */signed char) (~(((int) (unsigned char)158))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((long long int) arr_27 [i_3] [i_6 + 1] [i_3 - 2] [0] [i_8])), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35589)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4135137134323508357LL)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((_Bool) var_9)))))))))));
                            var_26 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (unsigned char)92)) - (((/* implicit */int) arr_26 [i_3])))) - (((((/* implicit */_Bool) arr_20 [i_6] [i_5] [i_6])) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (unsigned char)163)))))) + ((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))))));
                        }
                    }
                } 
            } 
        }
        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_27 *= ((/* implicit */signed char) ((long long int) ((var_13) - (((/* implicit */int) arr_25 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1])))));
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (-((-(arr_33 [i_3 + 1]))))))));
        }
    }
}
