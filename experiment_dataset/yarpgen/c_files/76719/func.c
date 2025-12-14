/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76719
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = ((long long int) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) max((var_11), ((+(((/* implicit */int) (_Bool)1))))));
                                arr_13 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [i_4 - 3] [i_2] [i_3] [i_2])), (min((18446726481523507200ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))))) ? (((/* implicit */long long int) (~(2021992015U)))) : ((+(arr_5 [i_0 - 1])))));
                                arr_14 [3ULL] [3ULL] [i_0] [i_3] [i_4] = ((/* implicit */short) (-((+(((var_13) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [15])) : (((/* implicit */int) (unsigned char)96))))))));
                                arr_15 [(unsigned short)14] [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) == (arr_4 [i_0] [i_1])))), (arr_6 [i_0] [i_1] [i_3]))) > (min((((/* implicit */long long int) var_8)), ((~(arr_4 [i_0] [i_2])))))));
                                arr_16 [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_4]), (arr_6 [i_0] [i_2] [(unsigned short)1])))) || ((_Bool)1))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_0] [i_1] [i_2]);
                    arr_18 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) 1292013025528065233LL))))) ? (((((/* implicit */unsigned long long int) arr_8 [i_0 + 1] [i_1] [i_2])) % (17592186044411ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_12 [i_0] [i_0 + 1] [15ULL] [i_0] [(_Bool)1]))))) + (((arr_4 [i_0] [i_1]) ^ (((/* implicit */long long int) var_3)))))))));
                    arr_19 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_12 [i_0] [i_0] [(unsigned char)6] [i_0] [i_0]);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_23 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((int) arr_1 [i_0] [i_5])) > (((/* implicit */int) var_9))));
            arr_24 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (unsigned short)58491);
        }
        /* vectorizable */
        for (short i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            var_18 = ((/* implicit */short) (+((+(((/* implicit */int) var_2))))));
            arr_27 [i_0] = ((/* implicit */unsigned short) (~(arr_21 [i_0 + 1] [i_6 - 1])));
        }
        var_19 = ((/* implicit */_Bool) ((((arr_4 [i_0] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) var_8)))))))) | (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1292013025528065232LL)))) ? (((/* implicit */int) arr_25 [i_7] [i_7])) : (((/* implicit */int) var_0))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_30 [i_7])))) && (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7] [0LL]))));
        var_22 += ((/* implicit */short) (~(((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_9] [i_9])) / (((/* implicit */int) arr_1 [i_9] [i_8]))));
                    arr_36 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_31 [i_7] [(unsigned char)5] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_30 [i_7])));
                    arr_37 [i_7] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9] [i_9]))) + (arr_28 [i_7])));
                    var_24 = ((/* implicit */signed char) ((((arr_5 [i_9]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (21988)))));
                    var_25 = ((/* implicit */short) arr_29 [i_8]);
                }
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        arr_40 [i_10] [i_10] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_38 [i_10])), (max((arr_39 [i_10]), (max((arr_39 [i_10]), (((/* implicit */int) arr_38 [i_10]))))))));
        var_26 -= ((/* implicit */short) var_4);
    }
    var_27 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))))))) >= ((-(-3079944983669726549LL)))));
    var_28 |= ((/* implicit */unsigned long long int) ((long long int) -1649244908));
}
