/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88726
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-127))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 4; i_2 < 7; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                        arr_11 [i_1] [5LL] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((min((arr_9 [i_0] [(unsigned char)9]), (-1145812633248840030LL))), ((+(arr_9 [i_0] [i_1 - 1])))));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3857919736339877994LL)) || (((/* implicit */_Bool) var_11)))))) : (9409714617521772330ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (9037029456187779288ULL))))));
        /* LoopNest 2 */
        for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            for (short i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                {
                    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)122))) ? (2031554441107536554LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [(signed char)2])) ^ (((/* implicit */int) (signed char)16)))))))) ? (((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))) ? (((((/* implicit */_Bool) (unsigned char)47)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */short) arr_5 [i_5] [i_0])), (var_7))))));
                    var_16 &= ((((/* implicit */int) (short)8)) << (((/* implicit */int) ((short) arr_8 [i_0] [i_4] [i_5]))));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        var_17 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) -4684117442483686936LL)) ? (arr_2 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [4LL] [i_6] [i_6] [i_6]))))));
        var_18 = ((/* implicit */int) 4684117442483686916LL);
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned long long int) var_11)))));
}
