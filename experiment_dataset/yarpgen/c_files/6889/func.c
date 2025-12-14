/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6889
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3210611420720723084ULL)) ? (var_0) : (-656066004)))), (13012549216972418189ULL))) : (((/* implicit */unsigned long long int) ((((arr_4 [i_2] [i_1] [i_0]) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))) << (((15236132652988828505ULL) - (15236132652988828504ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_1))));
                                arr_14 [i_0] [i_2] [15] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 3572682538619589686ULL)) || (((/* implicit */_Bool) var_4)))))))) ? (((((((/* implicit */_Bool) 1152921504606846976LL)) || ((_Bool)0))) ? (((3802708114852041314LL) / (((/* implicit */long long int) var_0)))) : (((((/* implicit */_Bool) 3210611420720723084ULL)) ? (arr_13 [i_2] [i_3] [18ULL] [i_1] [i_2]) : (((/* implicit */long long int) -1073741824)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_11 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) 3183944385U)), (288230376147517440ULL)))));
                        arr_17 [i_2] [i_1] [i_0] [2] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((!(((((/* implicit */_Bool) 3210611420720723084ULL)) && (((/* implicit */_Bool) 2061628714U)))))), (max(((!(((/* implicit */_Bool) arr_1 [9])))), (arr_4 [i_0] [i_0] [i_0])))));
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2233338588U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16128))) : (9223372036854775807LL))))));
                        arr_18 [(unsigned short)15] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_11 [i_0] [13LL] [i_1] [i_0] [i_5]))))))) / (((/* implicit */int) (_Bool)1)));
                        var_13 += ((/* implicit */long long int) ((-1073741832) + (((/* implicit */int) (unsigned char)254))));
                    }
                    for (int i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        var_14 ^= ((/* implicit */unsigned int) ((max((((3210611420720723075ULL) & (((/* implicit */unsigned long long int) arr_10 [i_0] [10] [(unsigned short)15] [0U] [17ULL])))), (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) ((int) 2147483647)))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_7)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))))))))));
                    }
                    var_16 |= ((/* implicit */unsigned long long int) (+(((((((/* implicit */long long int) arr_1 [i_0])) ^ (arr_8 [i_0] [i_2] [i_2] [i_1] [(unsigned char)12] [i_0]))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) var_6)), (1545801901U))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (unsigned char)0);
}
