/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59283
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
    var_20 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (811104373)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_11))))) : (((max((var_11), ((_Bool)1))) ? (((/* implicit */unsigned long long int) -6587647778263195283LL)) : (((((/* implicit */_Bool) 4323455642275676160LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_6)))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)236)) ? (-811104374) : (((/* implicit */int) (unsigned char)20))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) -811104394)))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_22 ^= ((/* implicit */_Bool) (((_Bool)0) ? ((((_Bool)1) ? (562949953159168LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (+(-811104381))))));
                        arr_19 [i_2] [i_2] [i_3] [i_4] [i_4] [i_1] &= arr_1 [i_3];
                    }
                } 
            } 
        } 
        arr_20 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) -811104358)) : (((((/* implicit */_Bool) 3586939355723392793ULL)) ? (arr_0 [i_1]) : (arr_14 [i_1])))))) : (max((arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)50)) : (422743466))))))));
    }
    var_24 &= ((/* implicit */_Bool) var_10);
}
