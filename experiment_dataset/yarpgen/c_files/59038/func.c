/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59038
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 2712048901U)) | (min((((/* implicit */unsigned long long int) (short)27996)), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 1713236170U))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) (signed char)-30);
                        var_21 ^= min((13325595084172823305ULL), (((/* implicit */unsigned long long int) ((arr_6 [i_2] [i_2] [i_2 - 1]) && (((/* implicit */_Bool) 5121148989536728310ULL))))));
                        var_22 = ((/* implicit */int) min((var_22), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3006110117714610146ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3272477383U)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])) && (((/* implicit */_Bool) 1022489922U)))))))))));
                        arr_14 [i_0 + 4] [i_1] [i_2] [(signed char)0] [i_0 + 4] [i_2] = ((/* implicit */signed char) ((((max((((/* implicit */unsigned int) arr_6 [i_0] [i_1 - 3] [i_0])), (1022489922U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_2 [i_0])))))))) ? (min((min((((/* implicit */unsigned long long int) arr_11 [i_0 + 2] [i_1] [i_0 + 2])), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2])), (13325595084172823305ULL)))));
                        var_23 = (short)-32744;
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0]))))), (max((5121148989536728304ULL), (((/* implicit */unsigned long long int) arr_7 [i_0])))))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((/* implicit */int) arr_9 [i_0 + 3] [i_0 + 3])))))));
    }
    for (short i_4 = 1; i_4 < 10; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] &= (+(var_3));
        var_26 -= (!(arr_6 [i_4 + 3] [i_4] [i_4]));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        for (int i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            {
                var_27 *= ((/* implicit */short) 5121148989536728314ULL);
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */int) min(((short)-13667), (((/* implicit */short) arr_22 [i_5] [i_6] [i_5]))))), ((-(var_5))))) : (((/* implicit */int) arr_22 [i_5] [i_5] [i_5]))));
                arr_23 [(short)3] [(short)2] [(short)3] = ((/* implicit */signed char) (((+(((/* implicit */int) ((((/* implicit */_Bool) 3272477375U)) && (((/* implicit */_Bool) 1022489938U))))))) ^ (((/* implicit */int) (((~(0U))) < (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-1))))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_11);
    var_30 += ((/* implicit */signed char) ((var_17) + (((/* implicit */unsigned long long int) var_12))));
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(var_12))), (((((/* implicit */unsigned int) ((/* implicit */int) var_19))) + (1022489912U)))))) && (((max((((/* implicit */unsigned int) var_18)), (0U))) < ((-(3272477383U)))))));
}
