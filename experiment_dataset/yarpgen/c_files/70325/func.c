/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70325
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
    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 35184372088831LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)247))))))) ? (((/* implicit */int) (unsigned short)35377)) : (((((/* implicit */int) var_8)) ^ (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)30148))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_12 *= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) (unsigned short)35398))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((((unsigned long long int) arr_0 [i_0 - 3] [(signed char)7])), (((/* implicit */unsigned long long int) var_7)))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_13 [1LL] [1LL] [i_2] [i_2] = ((/* implicit */short) (((~(var_6))) < (((/* implicit */long long int) (((-(((/* implicit */int) arr_7 [i_2] [i_3] [(signed char)16])))) * (((/* implicit */int) arr_4 [i_3])))))));
                        var_14 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)35384)) ^ (((((/* implicit */_Bool) (unsigned short)30164)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (unsigned short)35398))))));
                    }
                } 
            } 
        } 
        arr_14 [(unsigned short)12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)35374)) ? (-1117363339535976903LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70)))))));
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned char)62), ((unsigned char)68))))));
    }
}
