/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9735
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)8737)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) ? ((~(min((((/* implicit */long long int) var_4)), (150453549114053287LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)23776)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [17U] [i_1 - 1] = ((/* implicit */unsigned int) (unsigned char)213);
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3]))) : (16084031134878575493ULL)))) || (((/* implicit */_Bool) (unsigned short)41760))))) ^ (((/* implicit */int) (_Bool)1))));
            arr_7 [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((long long int) var_13)), (((/* implicit */long long int) var_4))))), (arr_2 [i_0])));
            arr_8 [i_0] = ((/* implicit */unsigned char) (~((-(min((((/* implicit */long long int) (unsigned short)23760)), (var_1)))))));
            arr_9 [i_0] [i_1 - 1] = ((/* implicit */long long int) (unsigned short)23776);
        }
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) max((var_12), (var_16)));
            var_22 = ((/* implicit */_Bool) max(((unsigned short)23776), ((unsigned short)39897)));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_10)) - (arr_2 [(short)13]))) - ((-(arr_4 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 3])) ? (arr_4 [i_2 - 2] [i_0 + 1] [i_0 + 2]) : (arr_4 [i_2 + 3] [i_0 + 1] [i_0 + 3]))) : (((((((/* implicit */int) (unsigned short)23749)) != (((/* implicit */int) (unsigned short)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41760))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_11 [i_0] [i_0]))))))))));
        }
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_14))));
                arr_18 [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_4])) ? (var_16) : (var_5)))) && ((!(((/* implicit */_Bool) var_0)))))))) % ((-(arr_10 [i_4] [i_3 - 2] [i_4])))));
            }
            for (unsigned int i_5 = 1; i_5 < 24; i_5 += 3) 
            {
                arr_21 [i_3] [i_3] [i_3 + 1] [i_3] = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23785))) : (-4445952141376704814LL));
                var_25 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_15 [(unsigned char)20] [(unsigned short)16])))));
            }
            for (long long int i_6 = 4; i_6 < 21; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 1; i_7 < 24; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0 + 1] [i_3 + 1] [13] [11ULL] [(unsigned short)10] [i_8 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_26 += ((/* implicit */_Bool) (+(var_10)));
                        arr_29 [i_0 + 3] [i_0 - 1] [i_0 + 3] [i_0 + 3] [6U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)201))));
                    }
                    arr_30 [i_6] [i_6] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((var_0) > (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 - 4])))))), (min(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))))));
                    var_27 ^= ((/* implicit */unsigned short) min((((((var_16) + (9223372036854775807LL))) << (((((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39892))) | (var_16))) + (6145423114800202810LL))) - (48LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (unsigned short)23776))))) ? (((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)59676)) : (((/* implicit */int) (unsigned short)50086)))))))));
                }
                arr_31 [i_3] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41764)) ? (((/* implicit */int) arr_19 [i_3 + 1] [i_3 - 1] [i_0 + 3])) : (((/* implicit */int) (unsigned short)23788))))) ? (((/* implicit */int) min((arr_19 [i_3 - 2] [i_3 + 2] [i_0 - 1]), (arr_19 [i_3 - 3] [i_3 - 2] [i_0 + 3])))) : ((-(((/* implicit */int) var_13)))));
                arr_32 [i_6] [(signed char)3] [i_0 + 1] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
            }
            for (signed char i_9 = 4; i_9 < 24; i_9 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (long long int i_11 = 1; i_11 < 24; i_11 += 1) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_9);
                            var_28 = ((/* implicit */long long int) 262143ULL);
                            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_9 - 1])))) && (((((/* implicit */_Bool) -1001297240592038573LL)) || ((_Bool)1))))))));
                        }
                    } 
                } 
                arr_41 [i_3] [i_9] = (+((-(arr_2 [i_0]))));
                arr_42 [23U] [i_3] [20U] [i_0] = ((/* implicit */long long int) var_11);
                var_30 ^= ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32766)) <= (((/* implicit */int) (unsigned short)17276)))) ? (((((/* implicit */_Bool) (unsigned short)17265)) ? (((/* implicit */int) var_4)) : (1750808464))) : ((+(((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48270)))));
            }
            var_31 = ((/* implicit */int) (!(((_Bool) arr_3 [i_0 + 2] [i_0 + 2]))));
            arr_43 [15LL] [i_0] [i_3] = ((/* implicit */unsigned short) var_0);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 3; i_13 < 24; i_13 += 1) 
                {
                    for (long long int i_14 = 1; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_52 [i_0] [i_0] [i_0] [i_0] [i_13] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+((-(((/* implicit */int) var_6))))))) | (-4703626446832213717LL)));
                            var_32 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)17266))));
                        }
                    } 
                } 
            } 
            var_33 += ((/* implicit */short) (unsigned short)23776);
        }
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0 + 3] [i_0 + 3] [i_0 + 3])))) ? ((+(((/* implicit */int) min(((unsigned short)48271), (((/* implicit */unsigned short) arr_47 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))))) : (((/* implicit */int) (((~(((/* implicit */int) var_14)))) <= (((/* implicit */int) ((_Bool) (unsigned short)65535))))))));
        arr_53 [i_0 + 2] = ((/* implicit */_Bool) arr_36 [i_0 + 3] [i_0 + 3] [i_0]);
    }
    for (long long int i_15 = 1; i_15 < 10; i_15 += 1) 
    {
        var_35 = ((/* implicit */signed char) (((~(((((/* implicit */long long int) var_11)) % (-6128387817682718333LL))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)48280))))));
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) (unsigned short)17270)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) : ((~(var_0)))))) ? (((/* implicit */int) (unsigned char)106)) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (signed char)69)))))))));
    var_37 = var_5;
}
