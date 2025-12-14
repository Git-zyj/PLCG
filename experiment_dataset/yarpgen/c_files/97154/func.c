/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97154
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */short) arr_2 [i_1] [i_1]);
                var_11 = ((/* implicit */short) ((max((((arr_1 [i_0 - 3]) - (-7693023024523942846LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [(short)14]))))))) >= (arr_1 [i_0 - 3])));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))))), (((unsigned int) 3005271692U))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((/* implicit */_Bool) -7693023024523942846LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2]))) : (-7693023024523942846LL))), (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0 + 1])), ((~(((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))))))))))));
                    var_14 -= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) arr_0 [i_1])))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) >> (((((((/* implicit */_Bool) var_8)) ? (((var_8) * (var_8))) : (max((var_4), (((/* implicit */unsigned long long int) -7693023024523942846LL)))))) - (13598179414543666983ULL)))));
                }
                var_15 = ((/* implicit */int) var_0);
                var_16 += ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-7693023024523942854LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58)))))) || (((/* implicit */_Bool) -7693023024523942843LL)))))) % (((((/* implicit */_Bool) arr_4 [6U])) ? (max((4587266284356384312ULL), (arr_4 [i_0]))) : (((unsigned long long int) -7693023024523942846LL)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_6)) - ((-(var_2))))) * ((+(((((/* implicit */unsigned long long int) var_3)) / (var_2)))))));
    /* LoopNest 2 */
    for (short i_3 = 3; i_3 < 15; i_3 += 2) 
    {
        for (unsigned char i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_13 [i_5] [(unsigned char)1] [i_3 - 3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)210))));
                    var_18 = ((/* implicit */_Bool) (((~(arr_4 [i_4]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7693023024523942846LL))))))));
                }
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_19 = ((/* implicit */short) arr_8 [11]);
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)60)) ? ((+(((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_4 - 1] [i_4 - 1] [i_6]))) / (9038063131026457871LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                }
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_21 = var_0;
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)21)) << (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) arr_8 [i_3])))) == (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1] [i_4]))))))));
                }
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 + 1] [i_3])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_7))))) - (((9297516551689005103ULL) + (((/* implicit */unsigned long long int) 4585023737884358891LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_6)))) && (((/* implicit */_Bool) arr_6 [i_3 - 3])))))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) / ((+(arr_16 [i_3 - 2] [i_4 - 2] [i_4 + 1] [i_4]))))));
            }
        } 
    } 
}
