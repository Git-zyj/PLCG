/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75934
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
    var_13 = ((/* implicit */signed char) (-((((+(3965471197861375507ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6)))))))));
    var_14 += ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (((-(14481272875848176124ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)65531))) * (((/* implicit */int) (unsigned char)177)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(max((arr_6 [i_0 + 3] [i_1 - 1]), (((/* implicit */unsigned long long int) var_1))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    arr_11 [(_Bool)1] = (+(((((/* implicit */_Bool) 16888886405815803625ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_17 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned long long int) (unsigned short)35129);
                                var_16 = ((/* implicit */unsigned short) ((unsigned int) arr_5 [i_0 - 1] [i_2 + 3] [i_1 - 1]));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (((+((-(((/* implicit */int) var_12)))))) < (max((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_5 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) 3965471197861375520ULL))));
                    }
                    var_19 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_4 [i_0 + 1] [i_0]))))));
                    var_20 = ((/* implicit */unsigned short) arr_16 [(unsigned char)0] [i_1 - 1] [i_1] [i_0 + 3] [i_1 - 1] [i_1]);
                    arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) > ((-(-1LL)))))), (((unsigned long long int) var_2))));
                }
                for (long long int i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((int) 6288175073221913498LL))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) 4118072645062313288LL))))));
                    var_22 = ((/* implicit */unsigned char) ((((max((var_2), (var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [(unsigned short)11])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_29 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_27 [i_0 + 3])) : ((-(((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 1]))))));
                var_23 = (unsigned short)28530;
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_9);
}
