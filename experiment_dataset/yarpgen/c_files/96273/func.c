/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96273
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_12 [(signed char)1] [i_3] = ((/* implicit */int) var_2);
                        var_14 = max((((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) < (-8504386320339981404LL)))), (max((((/* implicit */long long int) ((((((/* implicit */int) (short)-12959)) + (2147483647))) << (((arr_9 [i_0] [i_1] [i_1] [i_2] [i_3]) - (7200860408064122764LL)))))), (-8504386320339981404LL))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((max((((/* implicit */long long int) (unsigned short)24838)), (arr_10 [i_3 - 1] [i_3 - 1] [i_0] [i_3] [i_3] [i_1]))), (((((/* implicit */long long int) ((/* implicit */int) (short)-27495))) - (-5037572674938542483LL))))))));
                        var_16 -= ((/* implicit */long long int) ((min((arr_11 [i_0] [i_3 + 1]), (arr_11 [i_0] [i_3 + 1]))) << (((((((var_5) != (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)211)))))) : (min((arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3]), (((/* implicit */long long int) var_9)))))) - (13924LL)))));
                    }
                } 
            } 
        } 
        var_17 += max((min((((/* implicit */long long int) ((_Bool) (unsigned short)40697))), (8136459600083771882LL))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) > (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_18 -= ((/* implicit */long long int) (signed char)-14);
                    var_19 = ((/* implicit */short) ((min((((long long int) arr_8 [i_0] [(_Bool)1])), (((/* implicit */long long int) ((unsigned short) -8504386320339981392LL))))) | (((/* implicit */long long int) min(((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_4] [i_0])))), (((/* implicit */int) min((arr_2 [i_4]), (((/* implicit */short) (unsigned char)134))))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) ((var_2) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((int) (unsigned short)24838)) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) (signed char)2))))))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */int) (short)12577)) < (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))));
    }
    for (short i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        var_22 = ((((((arr_20 [i_6]) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6]))))) ^ (((/* implicit */long long int) min((arr_18 [i_6] [i_6] [i_6] [i_6]), (((/* implicit */int) var_4))))))) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6] [i_6]))));
        var_23 &= ((/* implicit */short) var_10);
    }
    var_24 = ((/* implicit */short) ((var_5) - (((/* implicit */int) var_3))));
    var_25 = ((/* implicit */unsigned char) var_5);
}
