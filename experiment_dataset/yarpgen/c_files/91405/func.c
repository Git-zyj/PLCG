/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91405
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_0))), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_5 [i_0 - 1] [i_0 + 1] [i_0])))))) & (((/* implicit */unsigned int) max(((~(((/* implicit */int) (unsigned char)250)))), (((((/* implicit */_Bool) arr_3 [(short)7] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_0])))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) max(((unsigned char)251), ((unsigned char)22)));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42525)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [1])))))) ? (((((/* implicit */int) (unsigned short)42501)) >> (((((/* implicit */int) var_8)) + (7248))))) : (((/* implicit */int) max((arr_8 [i_0] [11] [i_2] [i_0]), (((/* implicit */unsigned char) arr_4 [i_0])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) (short)21252)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (short i_4 = 3; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned short) arr_12 [i_1] [i_0]);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)42501)))), (arr_2 [i_1] [i_1 - 3] [i_2]))), (((/* implicit */unsigned int) arr_4 [i_1])))))));
                        var_19 = (unsigned char)227;
                    }
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)234)), (18308124892543700881ULL)));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)235)), (arr_9 [i_0 - 1] [i_1 - 2] [(unsigned short)6] [i_0] [(unsigned short)6] [i_0 - 2])))) ? (((unsigned long long int) arr_10 [i_0 - 1] [i_0 - 3])) : (((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_1 - 3] [i_2] [i_0] [(short)10] [i_0 - 3]))))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_1 - 1] [(unsigned char)3])), ((-(min((((/* implicit */unsigned long long int) arr_3 [(short)5] [(short)5] [(_Bool)1])), (138619181165850728ULL))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)23035)) + (((/* implicit */int) arr_13 [i_5 - 1]))))));
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5 - 1])) ? (((/* implicit */int) arr_13 [i_5 - 1])) : (((/* implicit */int) arr_13 [i_5 - 1]))))) ? (((unsigned int) 18446744073709551615ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5 - 1]))));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned short) (-(((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_7] [(short)13]))) : (11325109798101607969ULL)))))))));
                    var_26 = ((/* implicit */unsigned long long int) var_12);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_8 = 4; i_8 < 7; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 1) 
        {
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8 - 3] [14ULL] [i_8])) ? (arr_1 [i_8 + 1]) : (((/* implicit */int) arr_10 [i_8] [8ULL]))))) ? ((+(min((4294967295U), (((/* implicit */unsigned int) (unsigned short)42526)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_8] [(_Bool)1]))))) ? (((/* implicit */int) arr_8 [(unsigned short)0] [i_8 - 3] [i_8 + 1] [(unsigned short)0])) : (((((/* implicit */_Bool) arr_17 [8U] [14ULL] [14ULL])) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)246))))))))))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)23011)))))));
                var_29 = ((/* implicit */long long int) ((11325109798101607969ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)86), (var_11)))))));
                var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_8 - 4] [i_9 - 2] [i_8])) && (((/* implicit */_Bool) 13047240423642071717ULL)))), (max((arr_24 [i_9 + 2] [i_9]), (arr_24 [i_8 - 1] [i_9])))));
            }
        } 
    } 
}
