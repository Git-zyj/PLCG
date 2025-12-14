/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59152
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) max(((_Bool)0), ((_Bool)0)))) <= (((/* implicit */int) (!((_Bool)1))))))), ((unsigned char)245)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) ((((arr_6 [i_2]) - (arr_6 [i_1 + 1]))) + (arr_6 [i_0 - 1])));
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)0))));
                    }
                    var_13 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-40))))));
                }
            } 
        } 
        var_14 -= ((/* implicit */int) min(((_Bool)1), ((_Bool)0)));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 3; i_5 < 7; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    {
                        arr_18 [i_0] [7] [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((((/* implicit */_Bool) max(((unsigned short)29568), ((unsigned short)35967)))) && (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))))))))));
                        var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */int) (_Bool)0))))));
                        var_17 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))));
                        arr_19 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */short) arr_10 [i_6]);
                    }
                } 
            } 
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [(unsigned short)2] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((-(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-19)), ((unsigned short)35968))))))));
            var_18 ^= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32752)) ? (4586242065751749512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_4] [i_4]))))))))), ((+(((/* implicit */int) (unsigned short)29552))))));
        }
    }
    for (long long int i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 2; i_8 < 7; i_8 += 2) 
        {
            var_20 ^= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_7 - 1] [i_8 - 2] [i_7 - 1] [i_8]))))), ((+(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 2 */
            for (unsigned short i_9 = 1; i_9 < 9; i_9 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) (+(2251799276814336ULL)));
                /* LoopSeq 3 */
                for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_13 [i_10] [i_10] [i_10 + 1] [(_Bool)1])))) < ((-(arr_5 [i_8 + 1] [i_7 - 2])))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-2072444304), ((-(((/* implicit */int) arr_28 [i_7] [i_7] [i_10]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_7])) ? (arr_21 [i_9 + 2]) : (arr_21 [i_7])))) : (((unsigned long long int) (_Bool)1))));
                }
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_24 = ((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 397911669373824282ULL))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (unsigned char)225))));
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((39181214695381946LL) | (((/* implicit */long long int) arr_6 [i_8]))))))) % ((+((+(18444492274432737302ULL)))))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)30439), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2528634528U)))) || ((!(((/* implicit */_Bool) arr_27 [i_8 + 2] [i_12] [i_8 + 2])))))))));
                }
                var_29 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-105))));
            }
            for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_40 [i_13] [i_13] [i_7 + 2] [i_7 + 2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (-(arr_34 [i_13] [i_8])))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_15] [i_14] [i_7])) ? (((/* implicit */unsigned long long int) min((arr_39 [i_7] [i_14] [i_15]), (((/* implicit */long long int) (signed char)(-127 - 1)))))) : (397911669373824282ULL)));
                            arr_47 [i_7] [i_7] [(_Bool)1] [i_14] [i_14] [i_7] [i_7] = max((((/* implicit */unsigned char) arr_2 [i_14] [i_8])), (((unsigned char) (_Bool)1)));
                            arr_48 [(short)1] [i_8 - 1] [i_13] [i_14] [i_13] = ((/* implicit */unsigned long long int) (-(var_4)));
                            arr_49 [i_14] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_50 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (_Bool)1)))));
            }
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        var_31 = ((/* implicit */int) arr_16 [i_16] [i_16] [i_16] [i_16]);
        var_32 ^= ((/* implicit */_Bool) ((int) arr_23 [i_16] [i_16] [i_16]));
        arr_55 [i_16] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((2251799276814347ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
    }
}
