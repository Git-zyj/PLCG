/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75225
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
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (min(((~(4571962123664200821LL))), (((((/* implicit */long long int) -1350081312)) ^ (-8084230038438171408LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_2]), (arr_1 [i_2])))) ? (((/* implicit */int) ((-4571962123664200821LL) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_2])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) (unsigned char)236);
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_0 - 1] [i_0] [i_0])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_23 *= ((/* implicit */unsigned int) (signed char)-96);
                            var_24 -= ((/* implicit */int) ((((4571962123664200821LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_4] [i_0 + 1]))))) ? (((unsigned int) arr_6 [i_0 - 1] [i_4] [i_0 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_0 + 1] [i_4] [i_0 + 1]), ((short)29672)))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(max(((-(((/* implicit */int) (unsigned char)20)))), (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_4] [i_6])) <= (((/* implicit */int) arr_0 [1ULL]))))))))))));
                            arr_17 [i_0] [i_0] [i_2] = -3690121529123939169LL;
                            var_26 = ((/* implicit */signed char) -1934557111);
                            var_27 &= ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_15 [i_4] [i_6] [i_2] [i_4] [i_6])));
                            var_28 = ((/* implicit */_Bool) ((unsigned short) min((arr_5 [(signed char)5] [i_0] [i_0]), (arr_5 [i_0 - 1] [3] [i_0]))));
                        }
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(signed char)5])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13625))) / (arr_19 [i_0] [i_4] [i_2] [3ULL] [i_0])));
                            var_30 = ((/* implicit */unsigned short) var_18);
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 3; i_8 < 7; i_8 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) max(((signed char)(-127 - 1)), ((signed char)117)));
                        var_31 += ((/* implicit */unsigned short) ((int) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned short)15989)))) + (((/* implicit */int) arr_21 [4U] [i_1])))));
                    }
                    arr_26 [i_0 - 1] [i_0] [1ULL] [2] = ((/* implicit */unsigned short) arr_4 [i_0 + 1] [i_1] [i_2] [5U]);
                }
            } 
        } 
    } 
}
