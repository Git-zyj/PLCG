/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79682
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [i_0 - 1] = ((/* implicit */int) ((unsigned short) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (arr_3 [i_0 - 1] [10ULL]))), (((/* implicit */int) var_0)))));
                var_13 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 685962704)) ? (((/* implicit */unsigned long long int) 7053125001952778138LL)) : ((-(9815018428639451739ULL)))))));
                var_14 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (((unsigned short) var_9)))))) == (min((arr_4 [i_0] [i_0 - 1]), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))));
            }
        } 
    } 
    var_15 = ((((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)74)))))) - (min((((((((/* implicit */int) (signed char)-37)) + (2147483647))) >> (((8631725645070099882ULL) - (8631725645070099877ULL))))), (((((-1014447800) + (2147483647))) << (((((/* implicit */int) (unsigned char)1)) - (1))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_16 [i_2] [i_3] [(unsigned short)3] [3LL] [i_3] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (unsigned char)250)))))));
                            arr_17 [i_2] [i_5] [i_3] = ((((/* implicit */_Bool) ((arr_0 [i_3] [i_5]) * (((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_3 - 1])), (var_9))))))) ? (max((arr_4 [i_4] [i_4]), (((/* implicit */unsigned int) ((_Bool) var_10))))) : (((/* implicit */unsigned int) 1433200054)));
                            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((arr_1 [6LL]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_13 [i_3] [i_4] [i_3] [(_Bool)1]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_2)))))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((3346587783U), (arr_8 [i_3 + 1])))) && (((/* implicit */_Bool) arr_3 [i_2] [i_2]))))))));
                            var_17 &= ((/* implicit */unsigned int) (((((-(((((/* implicit */_Bool) arr_11 [i_2] [(_Bool)1] [(unsigned char)4])) ? (((/* implicit */int) (unsigned short)64512)) : (-1433200055))))) + (2147483647))) << (((var_12) - (596625342U)))));
                        }
                    } 
                } 
                var_18 &= ((/* implicit */long long int) (~(-1433200055)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) 1433200048);
}
