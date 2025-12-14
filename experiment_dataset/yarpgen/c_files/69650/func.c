/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69650
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((-4101294663418662647LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1916)))))) ? (((long long int) arr_2 [i_0])) : (((((/* implicit */_Bool) (unsigned short)65523)) ? (-4101294663418662647LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_12 |= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_8 [i_0] [(_Bool)1] [i_1 - 1] [i_1 - 2]))) < (((((/* implicit */int) arr_8 [i_0] [i_0] [i_1 - 2] [i_1 - 3])) / (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 1] [i_1 - 1]))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */int) arr_11 [4LL] [i_0] [i_0])) < (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 3] [(unsigned short)2])) ? (arr_0 [2]) : (((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL))))))));
                                arr_14 [i_0] = ((/* implicit */int) arr_6 [(unsigned char)9] [i_1]);
                                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) <= ((-9223372036854775807LL - 1LL)))))) : (((unsigned int) arr_7 [i_0] [i_1] [i_2]))))) || (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4101294663418662647LL)) || (((/* implicit */_Bool) 4101294663418662630LL)))))) <= (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_2 [i_3]) : (((/* implicit */long long int) 2432807360U)))))));
                                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)0)), (min((min((3793736315U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_7 [i_1 - 2] [i_1 - 3] [i_1 + 1]))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (short)32760)) / (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((_Bool) -8927603186999296288LL)))))) >= (((/* implicit */int) ((3793736336U) <= (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)4)), (2147483633)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (short i_6 = 3; i_6 < 24; i_6 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) arr_18 [i_6 - 2] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            arr_26 [i_6] [(_Bool)1] [i_7] [i_8] [i_6] [i_5] = ((/* implicit */unsigned short) ((unsigned char) max((arr_25 [i_6] [i_6] [22] [i_6] [i_6 - 1] [i_6 + 1]), (((/* implicit */int) (unsigned char)198)))));
                            var_17 = ((/* implicit */signed char) (unsigned char)30);
                            var_18 = ((/* implicit */_Bool) ((unsigned long long int) 3245816990U));
                        }
                    } 
                } 
            }
        } 
    } 
}
