/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94191
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)4925))));
    var_20 = ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)4927))))) | (min(((~(-2360358805955277724LL))), (((/* implicit */long long int) var_15)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        arr_8 [i_0] [i_0] [(unsigned short)8] [i_0] = max((((/* implicit */unsigned short) ((short) arr_4 [i_2 - 2] [i_2 + 2] [i_2 - 2] [i_2 - 3]))), ((unsigned short)65535));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_1]))))) & (min((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [(unsigned short)4] [i_1]))))), ((-(59446334276736623LL)))))));
                            var_22 = ((/* implicit */unsigned short) ((long long int) (-(var_7))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (short)-28063))) / ((-(((/* implicit */int) min((((/* implicit */short) var_17)), (var_14))))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((unsigned int) ((unsigned char) (+(arr_2 [i_1])))));
                            arr_13 [i_0] [i_0] [(unsigned char)5] [i_2] [i_3] [i_3] [(unsigned char)9] = ((/* implicit */unsigned short) min((max((((((/* implicit */long long int) var_11)) != (-4586699570697942448LL))), (((arr_2 [i_5]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32937))))))), (((((/* implicit */int) min(((unsigned short)355), ((unsigned short)4043)))) < (((/* implicit */int) (_Bool)1))))));
                            arr_14 [(unsigned short)2] [(unsigned short)2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            var_25 = (~(9048172632058466911LL));
                            arr_17 [2U] [i_2] [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) (~(arr_4 [i_0] [i_2] [i_1] [i_0])));
                        }
                        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) ((long long int) ((-984896452) ^ (max((((/* implicit */int) (unsigned char)242)), ((-2147483647 - 1)))))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_7 - 2] = ((/* implicit */unsigned char) ((long long int) min((var_18), (((/* implicit */unsigned int) (-2147483647 - 1))))));
                        }
                    }
                } 
            } 
        } 
        var_27 = max(((+(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) var_18))))))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_20 [i_0] [i_0] [(_Bool)0] [0] [0] [(unsigned char)8])))));
        var_28 = ((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((((((/* implicit */int) var_4)) + (2147483647))) << (((var_10) - (3941948146U)))))))) & (min((((/* implicit */long long int) min(((unsigned short)44220), (((/* implicit */unsigned short) (_Bool)1))))), (min((((/* implicit */long long int) -984896451)), (-4661533168594689923LL))))));
    }
    var_29 = var_14;
}
