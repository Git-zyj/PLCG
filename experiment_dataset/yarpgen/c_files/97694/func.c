/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97694
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
    var_12 = (+(((/* implicit */int) var_4)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_9))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7772)) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 1])) : (((/* implicit */int) (unsigned short)65522)))))));
        var_13 &= ((/* implicit */_Bool) arr_3 [i_0 + 1]);
        var_14 = ((/* implicit */long long int) min((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))), (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) (unsigned short)33467))))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) 485449359U);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((((((/* implicit */_Bool) 580773758U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) << (((((((/* implicit */int) arr_5 [8LL])) + (20618))) - (6))))))))));
        var_17 += ((/* implicit */unsigned char) ((long long int) (unsigned char)139));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) << (((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65518))) : (arr_10 [i_2] [i_2]))) - (65518U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned short)7788))))) ? (min((arr_8 [i_2]), (arr_8 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
            {
                for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_19 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_14 [i_2] [i_3] [i_4 - 1]), (((/* implicit */short) arr_9 [i_5]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_3])), (var_9)))))) ? (min((((/* implicit */int) arr_16 [i_4 - 2] [9ULL] [i_4 - 3] [i_5 - 2])), ((-(((/* implicit */int) (unsigned short)44918)))))) : (((/* implicit */int) min(((short)-24165), (((/* implicit */short) ((unsigned char) arr_12 [i_5] [i_3] [i_3]))))))));
                        arr_20 [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) 12322259727677409284ULL))), ((+(var_9)))));
                        arr_21 [i_2] [i_3] [i_4 - 2] [i_5] [i_3] = ((/* implicit */signed char) ((unsigned int) min((arr_0 [i_5 - 1]), (((/* implicit */unsigned short) arr_5 [i_3])))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */short) min((((/* implicit */unsigned short) arr_15 [i_2] [i_2] [i_2] [i_2])), (arr_3 [(signed char)5])));
        var_19 = ((/* implicit */signed char) ((short) ((((/* implicit */int) (signed char)-113)) % (((/* implicit */int) (_Bool)1)))));
    }
}
