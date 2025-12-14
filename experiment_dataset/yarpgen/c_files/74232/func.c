/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74232
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_2])))) + (((/* implicit */int) ((signed char) arr_2 [i_2])))));
                    arr_8 [4] [(unsigned short)7] [(unsigned short)7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_0])))) && (((/* implicit */_Bool) var_5))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_13 = ((/* implicit */long long int) arr_11 [i_3] [i_4]);
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 3; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_20 [i_3] [3ULL] [i_4] [i_3] [i_5 - 1] [5] = ((/* implicit */long long int) arr_12 [i_3] [i_4]);
                        var_14 = var_4;
                        arr_21 [i_3] [i_5 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_14 [i_3] [i_5])) * (((/* implicit */int) arr_12 [i_4] [i_5])))))) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) (signed char)16)) : (arr_19 [i_3] [12LL] [i_3] [i_5 - 1] [i_6])))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_17 [(_Bool)1] [(signed char)0] [(signed char)0] [(signed char)0] [i_6] [(_Bool)1])))))) ? (((unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)28)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 2U)))) ? (max((var_7), (((/* implicit */unsigned int) arr_14 [i_6 - 2] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -7835934295805908976LL)) && ((_Bool)0))))))))));
                    }
                } 
            } 
            arr_22 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)26837))))) ? (((/* implicit */int) ((short) 1042649900))) : (((((/* implicit */int) (unsigned char)152)) & (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)0))))))));
            var_16 = ((/* implicit */_Bool) max((arr_15 [i_3]), (((/* implicit */long long int) ((707696366) >> (((max((arr_15 [i_4]), (((/* implicit */long long int) var_6)))) - (1498650591LL))))))));
        }
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        arr_33 [i_7] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (max((arr_31 [i_3] [12U] [12U] [i_9] [i_3] [i_3]), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [(_Bool)1] [i_8] [i_8] [i_3] [i_3])) || (((/* implicit */_Bool) var_9)))))) : ((-(min((((/* implicit */long long int) var_5)), (arr_15 [(signed char)18])))))));
                        var_17 = ((/* implicit */_Bool) (+(((arr_30 [i_3] [i_3] [i_3] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_18 += ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10])) && (((/* implicit */_Bool) arr_10 [i_10]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 0LL)) : (70368744177152ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_9))))))));
        var_19 -= ((/* implicit */long long int) ((((arr_31 [10] [i_10] [i_10] [(signed char)10] [i_10] [i_10]) ^ (arr_31 [10ULL] [(_Bool)1] [i_10] [i_10] [i_10] [10ULL]))) + (((arr_31 [(unsigned char)0] [i_10] [i_10] [i_10] [(unsigned char)0] [i_10]) | (arr_31 [12LL] [i_10] [i_10] [(unsigned char)20] [i_10] [12LL])))));
    }
}
