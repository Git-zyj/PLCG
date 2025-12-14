/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86107
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967285U)))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) 3922304431915904347ULL)) || (((/* implicit */_Bool) 9223372036854775807LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)168))) : (((((/* implicit */_Bool) var_3)) ? (min((17792589563709495212ULL), (var_7))) : (((/* implicit */unsigned long long int) var_4))))));
                    var_13 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) | (min((-4203185185034351268LL), (((/* implicit */long long int) (_Bool)1)))))));
                    arr_11 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((-(var_4)))));
                    var_14 -= ((((/* implicit */unsigned long long int) var_2)) - (((((/* implicit */_Bool) 2124278095615408660LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (14959945640626677385ULL))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)153)), (((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? ((-(14418592600533375971ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))))));
                    arr_21 [i_3] [i_5] = ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 6612915698348666266LL))))))) & (((/* implicit */int) (((!((_Bool)1))) && ((!(((/* implicit */_Bool) 3435493759U)))))))));
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 6612915698348666265LL)))))));
                    var_17 = ((/* implicit */long long int) ((int) ((unsigned int) (!(((/* implicit */_Bool) (signed char)-9))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            arr_28 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_7] [i_7 + 1])))) * (max((18446744073709551606ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3083882218U)) && (((/* implicit */_Bool) 4127403133U)))))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_14 [i_7])))) ? (max((((/* implicit */long long int) (unsigned char)143)), (946193019231428778LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) : (((((3482476379U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) -6612915698348666279LL)) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))))) : (((/* implicit */unsigned long long int) (+(6003229002294717562LL))))))));
            arr_29 [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (((+(16261610177905687567ULL))) <= (((/* implicit */unsigned long long int) max((min((var_12), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-11)) || (((/* implicit */_Bool) var_9))))))))));
            arr_30 [i_6] [i_7] = ((/* implicit */long long int) var_7);
        }
        arr_31 [i_6] [i_6] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_18 [i_6] [i_6] [i_6])) + (((/* implicit */unsigned long long int) arr_18 [i_6] [i_6] [i_6]))));
    }
}
