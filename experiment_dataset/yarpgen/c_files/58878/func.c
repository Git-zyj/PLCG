/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58878
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
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = (unsigned char)255;
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)33952), (arr_6 [(_Bool)1] [i_1] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)215)) * (((/* implicit */int) arr_2 [i_0 + 2])))))))), (((((/* implicit */_Bool) min((arr_7 [i_0]), ((unsigned short)59782)))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : ((~(((/* implicit */int) arr_0 [i_0]))))))));
                    var_15 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) (~(arr_3 [i_0])))) || (((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 2]))))), (max((arr_5 [i_0 + 2] [i_0 + 2] [(signed char)3]), (((/* implicit */int) (_Bool)1))))));
                    var_16 = ((/* implicit */long long int) ((min(((~(arr_1 [i_0]))), (((/* implicit */long long int) arr_7 [(_Bool)1])))) <= (((/* implicit */long long int) (~((~(((/* implicit */int) arr_0 [i_1])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                arr_14 [i_3] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_4])) || (((/* implicit */_Bool) (~(arr_12 [i_3] [i_4])))))) ? (((max((arr_13 [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_11 [i_3] [i_4])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) -8718027800097244500LL))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_3] [i_3] = ((/* implicit */signed char) max((arr_16 [i_3] [i_4]), ((~(min((arr_15 [i_3] [i_3] [i_3]), (((/* implicit */long long int) (_Bool)1))))))));
                    arr_18 [i_3] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)63430))))), (min((arr_16 [i_4] [i_5]), (0LL))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                    arr_19 [i_3 + 1] [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_13 [i_3] [3U])) ? (((/* implicit */long long int) arr_12 [i_3] [i_3])) : (arr_16 [i_3] [i_5])))))), ((~(max((arr_13 [i_3 - 2] [i_5]), (((/* implicit */unsigned long long int) (signed char)8))))))));
                    var_17 += ((/* implicit */_Bool) arr_11 [20LL] [i_5]);
                    var_18 = ((/* implicit */unsigned char) max(((~(max((((/* implicit */int) arr_11 [i_3] [(signed char)0])), (arr_12 [i_3 - 3] [i_5]))))), (max(((~((-2147483647 - 1)))), (((/* implicit */int) arr_11 [i_3] [i_3 - 3]))))));
                }
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) (~(((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_7]))) | (arr_10 [i_7]))) + ((-9223372036854775807LL - 1LL))))));
                                var_20 = ((/* implicit */long long int) max((var_20), (min((min((arr_15 [(signed char)2] [i_4] [i_4]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65507))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) -1011640713)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7] [i_7]))) : (4294967289U))), (((/* implicit */unsigned int) arr_12 [i_3 - 3] [(unsigned short)7])))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (unsigned char)71);
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) max((((/* implicit */long long int) var_12)), (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((7017826463780116332LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55)))))))));
}
