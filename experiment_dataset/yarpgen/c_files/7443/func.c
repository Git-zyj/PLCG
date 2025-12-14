/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7443
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) min((-8157814818745838805LL), (arr_4 [i_0] [(signed char)5])))), (min((6331875463225843746ULL), (9412193317381695142ULL)))))));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((133693440U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3])))))) ? (((/* implicit */int) (unsigned char)38)) : (228975661)))) ? (6225807105664583203ULL) : (((/* implicit */unsigned long long int) min(((((-9223372036854775807LL - 1LL)) / (-7144874424902167553LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_2] [(short)1])))))))))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_0] [i_3] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)23246), (((/* implicit */short) (_Bool)1)))))) : ((-(4722536106437096493LL)))))) && (((/* implicit */_Bool) (-(max((arr_4 [i_3] [i_2]), (arr_6 [i_3] [19ULL] [i_1] [i_0]))))))));
                        var_21 = ((/* implicit */int) ((min((((((/* implicit */_Bool) arr_5 [i_0] [8U])) || (((/* implicit */_Bool) arr_7 [i_3])))), (((((/* implicit */_Bool) 13513885258433805883ULL)) && (((/* implicit */_Bool) arr_0 [i_0] [6])))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)25601)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_7 [i_3]))))))) : (4879140362107428366ULL)));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_22 -= ((/* implicit */unsigned long long int) max((((4294967295U) % (((/* implicit */unsigned int) -145782770)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_4 [i_3 - 2] [i_0])) ? (((/* implicit */unsigned int) 2147483647)) : (0U))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_0] [i_1] [i_1] [i_3] [i_4]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                            var_23 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_7 [i_4]))))))), (arr_0 [i_3 - 3] [i_3 - 2])));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (min((((((/* implicit */_Bool) max((127LL), (8157814818745838804LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_1])), ((short)(-32767 - 1)))))) : (min((3012777803771899789ULL), (((/* implicit */unsigned long long int) (unsigned char)205)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 279888260U))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1] [i_1])), (arr_1 [i_4])))) - (10633))))))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_0 [i_3 + 3] [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                            var_26 += ((/* implicit */short) 4722536106437096493LL);
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_27 += ((/* implicit */unsigned long long int) (~(((int) arr_16 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_1]))));
                            var_28 -= (((~(arr_4 [i_3 + 3] [i_3 - 2]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2] [i_0] [i_1] [i_2] [i_3] [i_6])) + (((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_2] [i_2] [i_2]))))) == (((((/* implicit */_Bool) (signed char)42)) ? (arr_13 [4ULL] [4ULL] [4ULL] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2051))))))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 384U))))))))));
                        }
                    }
                    var_30 = ((/* implicit */long long int) max(((~(((int) 68652367872ULL)))), (((/* implicit */int) ((short) 760816558)))));
                }
            } 
        } 
        var_31 -= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) (-(arr_4 [i_0] [(short)10])))) * (7880311113318754938ULL)))));
        var_32 = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) 423606457U)) : (-4722536106437096493LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)16] [i_0]))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) : (6661035189231342295ULL)))))));
    }
    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_21 [i_8] [i_7]), (((/* implicit */unsigned long long int) var_18))))))))));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(arr_6 [i_7] [i_7] [i_8] [i_8])))))) ? (((long long int) ((((/* implicit */_Bool) 3622519168U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27948))) : (510899848U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
        }
        var_35 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) arr_12 [i_7] [i_7] [i_7] [i_7])) == (-1499987954291056010LL))))));
    }
    var_36 &= ((unsigned short) ((unsigned int) (~(((/* implicit */int) var_18)))));
    var_37 = ((/* implicit */unsigned short) 11785708884478209321ULL);
}
