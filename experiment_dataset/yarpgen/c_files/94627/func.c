/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94627
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
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 1] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((-826604652), (826604651)))) ? (min((((/* implicit */long long int) var_6)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (short)(-32767 - 1)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) var_5)))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [(short)3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_0)), (11264617051818524261ULL)));
                    arr_10 [(unsigned short)4] [i_1 + 3] = ((/* implicit */unsigned short) ((short) ((signed char) ((var_4) / (((/* implicit */int) var_9))))));
                    arr_11 [i_2] = ((/* implicit */unsigned long long int) min((0LL), (((/* implicit */long long int) 274737078))));
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) (short)16323);
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] = ((/* implicit */_Bool) var_6);
        arr_18 [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -969741333)) ? (((/* implicit */int) var_0)) : (-826604644))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3])))))));
    }
    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) (~(max((826604632), (826604651)))))), (((long long int) var_9))));
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    arr_26 [i_6] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)23404)) ? (((/* implicit */int) (unsigned short)22681)) : (-969741333)));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            {
                                arr_33 [i_6] = (+(max((969741353), (((/* implicit */int) (short)-30525)))));
                                arr_34 [i_4] [i_5] [i_6] [i_5] [i_7] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_5] [i_6] [i_8 - 1])))))) > (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_4]))))) || (((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_8] [7])))))));
                                var_12 = ((/* implicit */_Bool) (~(((((((/* implicit */unsigned long long int) arr_19 [i_4])) / (var_5))) >> (((((((/* implicit */_Bool) 826604651)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30530))) : (-3954530054744726769LL))) - (30519LL)))))));
                                arr_35 [i_4] [i_6] [(_Bool)1] [(_Bool)1] [i_8] [i_8] = ((/* implicit */long long int) ((((((/* implicit */int) min(((unsigned short)51651), (arr_31 [i_4] [i_4] [i_6] [i_4] [i_8])))) - (((/* implicit */int) var_9)))) >> (((((274737093) % (-425765796))) - (274737065)))));
                                var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) 2064069210199378363LL)), (0ULL))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_28 [i_4] [i_4] [i_5]))))))));
                            }
                        } 
                    } 
                    arr_36 [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_0 [i_4])), (var_1))) >> (((18446181123756130304ULL) - (18446181123756130298ULL)))));
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned int) var_1);
        arr_37 [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)22681)) : (((/* implicit */int) arr_20 [i_4])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (short)30063))) < (((arr_30 [i_4] [2ULL] [i_4] [2ULL] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [(_Bool)1] [i_4]))))))))));
        arr_38 [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_15 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (short)-5683)), (var_10))), (((/* implicit */unsigned long long int) arr_39 [(_Bool)1]))))) ? (min((((1649267441664ULL) / (((/* implicit */unsigned long long int) -826604663)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */unsigned long long int) min((arr_40 [i_9]), (826604652)))));
        arr_41 [i_9] = ((((/* implicit */long long int) ((((/* implicit */int) (short)-24191)) / (((/* implicit */int) (short)(-32767 - 1)))))) | (((((/* implicit */long long int) ((/* implicit */int) ((-425765797) > (((/* implicit */int) (_Bool)1)))))) % (((var_1) | (((/* implicit */long long int) ((/* implicit */int) (short)9212))))))));
        arr_42 [i_9] = ((/* implicit */_Bool) (((_Bool)1) ? (268427264) : (((/* implicit */int) (unsigned short)21445))));
    }
    for (unsigned short i_10 = 3; i_10 < 16; i_10 += 4) 
    {
        arr_45 [i_10] = (~(8418088714159094635ULL));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) 1073741312))), (((long long int) (_Bool)1))));
    }
}
