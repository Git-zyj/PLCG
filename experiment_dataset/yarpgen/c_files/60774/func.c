/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60774
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) arr_4 [i_0] [i_1] [i_0]))), (max(((unsigned short)53638), (((/* implicit */unsigned short) arr_3 [(unsigned char)0])))))))));
                arr_6 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                arr_7 [i_0] [2ULL] = (~(1982006979U));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((var_6) - (max((((/* implicit */long long int) (unsigned char)0)), (arr_1 [i_1]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) - (2709384240U))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (var_8)));
        var_11 = ((/* implicit */int) arr_2 [i_2 - 1]);
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) (-(var_5))))), (min(((-(arr_2 [(unsigned short)12]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) var_2))))))))))));
        arr_13 [i_2 + 1] = ((/* implicit */signed char) var_7);
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(((arr_12 [i_2 + 1] [i_2 + 1]) ^ (((/* implicit */unsigned long long int) (~(var_5)))))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) (signed char)41);
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_3])))))));
                        arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [10LL] [i_4] [i_4] [i_4]))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(_Bool)1] [(_Bool)1] [i_4] [(unsigned char)13] [4LL])) ? (((((/* implicit */unsigned long long int) arr_2 [i_3])) % (arr_15 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)2277)))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_17 [i_3])) : (((/* implicit */int) arr_3 [i_3]))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((-4242329571523045391LL) - (((/* implicit */long long int) arr_22 [i_3] [i_3] [(_Bool)1] [i_3] [i_3])))))));
    }
    for (short i_7 = 1; i_7 < 17; i_7 += 4) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((-124627148), (((/* implicit */int) arr_25 [i_7]))))))) ? (arr_26 [i_7 + 1] [i_7]) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-122)))))));
        arr_28 [i_7] = ((/* implicit */unsigned int) (-(4544634816465220762LL)));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 18; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)53611)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_7 + 2])))))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((0U) - (0U)))) : (max((((/* implicit */long long int) 727531947)), (0LL))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7]))) != (arr_29 [i_7 - 1] [i_7 + 1] [i_8 - 1]))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_31 [i_7])), (arr_35 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1]))))))));
                        arr_38 [i_7] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */long long int) -1)) : (6409807357788428199LL)));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_41 [i_7] [i_7] [i_9] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) var_4);
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)15));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_7 + 2] [i_8 - 1] [i_8 - 1] [i_9] [i_9])) ? (arr_35 [i_7 - 1] [i_8 - 1] [i_8 + 1] [i_9] [i_9]) : (arr_35 [i_7 + 1] [i_8 - 1] [i_8 - 1] [2LL] [i_8])));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_30 [i_7])) > (((/* implicit */int) arr_37 [i_7] [i_7] [6U] [i_7 + 2])))))) ^ (((unsigned int) (unsigned short)39766))))));
    }
    var_24 = ((/* implicit */long long int) var_2);
}
