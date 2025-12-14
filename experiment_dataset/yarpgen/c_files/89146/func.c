/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89146
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    var_10 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)119)))) | (((((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0])) & (((/* implicit */int) (signed char)-104))))))), (max((3198800734U), (((/* implicit */unsigned int) arr_5 [i_2 + 2] [i_2 + 3] [i_2]))))));
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (short)-32766))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (+((((+(((/* implicit */int) (unsigned short)53351)))) * (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (1628522332)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((max((((/* implicit */long long int) max((3198800734U), (((/* implicit */unsigned int) arr_1 [i_0]))))), (max((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_2])), (8666833651034790023LL))))) > (((/* implicit */long long int) ((/* implicit */int) (!((!(arr_5 [i_3 + 2] [i_2] [i_0]))))))));
                                arr_17 [i_0] [i_1] [i_2] [i_4] = ((((((arr_14 [i_2] [i_1] [i_0] [i_1] [i_4] [i_4]) || (((/* implicit */_Bool) arr_13 [i_0] [i_0])))) && (max(((_Bool)1), ((_Bool)1))))) && (((((/* implicit */_Bool) ((int) (unsigned short)33295))) || (((((/* implicit */_Bool) 8666833651034790047LL)) || ((_Bool)0))))));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)41)) * ((+(((/* implicit */int) ((unsigned char) arr_4 [i_1])))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((0) | (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2])) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((-8666833651034790047LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)16647)) - (16647)))))) && (((/* implicit */_Bool) max((arr_11 [i_0] [i_1] [i_1] [i_1]), (((/* implicit */short) (_Bool)1)))))))) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                {
                    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]))))) + (((/* implicit */int) arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 - 1]))));
                    arr_20 [i_5] [i_1] [i_0] = ((/* implicit */long long int) (-(3560005416U)));
                }
                for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((long long int) ((((/* implicit */_Bool) (short)32767)) ? (-4259245766847470377LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (arr_13 [i_0] [i_0]))))));
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(((7353219276672447330LL) / (((/* implicit */long long int) (-(1623155293))))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_1] [i_6] [i_7] [i_8] = max((max((((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_6] [i_0] [i_7] [i_8]))) | (3560005424U))), (((unsigned int) 3560005434U)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_6]))))));
                                var_17 = ((/* implicit */int) (signed char)16);
                                arr_32 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8] = (~((+(((/* implicit */int) (short)8192)))));
                            }
                        } 
                    } 
                }
                var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(arr_30 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)8431))) - (arr_10 [i_0] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) -1537414251)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) (signed char)-9))))))));
                arr_33 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 3198800750U)), (min((min((-4320433921483666680LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (short)-8437))))));
    var_20 = ((/* implicit */long long int) ((unsigned char) -1));
    var_21 = var_5;
}
