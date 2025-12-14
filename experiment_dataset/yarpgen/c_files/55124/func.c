/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55124
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2389)) ? (((/* implicit */unsigned long long int) 2336727837788470258LL)) : (15970248697727274707ULL))))));
                    var_11 = (+((+(((((/* implicit */_Bool) -1228083324)) ? (3342702347663894263ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    var_12 = ((/* implicit */unsigned long long int) ((signed char) min((arr_6 [i_1] [i_2 - 1] [i_2 + 2] [i_1]), (((/* implicit */long long int) arr_5 [i_2] [i_2 - 1] [i_2 + 2] [i_2 - 1])))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)22855)) ? (4294967295U) : (4294967295U))), (((/* implicit */unsigned int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (short)-12488))))), (((unsigned long long int) -1))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 1; i_7 < 8; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_11 [i_3] [i_4] [i_5])))) ? ((+(16893183546796427683ULL))) : (((/* implicit */unsigned long long int) (-(var_0)))))));
                            var_15 = ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) 15104041726045657353ULL)) ? (((/* implicit */long long int) 4294967295U)) : (-3137631964033543877LL))))), (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)1)))))))));
                            var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */_Bool) arr_2 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-29966), (((/* implicit */short) arr_4 [i_3])))))) : (((unsigned int) 579964648283800074LL)))));
                            var_17 = ((/* implicit */_Bool) -7544990889997308162LL);
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */short) (unsigned short)9903);
                            var_19 = ((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_6] [(unsigned char)2] [i_8]);
                            var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (signed char)113))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) var_8);
                            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_17 [i_3 + 1] [i_6 - 1]))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) var_4))))))));
                        }
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)104))));
                        var_25 &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_13 [i_6 - 1] [i_5] [i_4] [i_3 + 2])))) : ((-(arr_22 [i_6] [i_6] [i_6] [i_5] [i_4] [i_3])))))));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (!(((arr_19 [i_3] [i_6] [i_5] [i_6] [i_4] [i_6]) || ((!(arr_0 [i_6]))))))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (var_3))))))));
}
