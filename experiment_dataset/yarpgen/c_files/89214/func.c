/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89214
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
    var_12 = ((((/* implicit */_Bool) 1388141441190407583LL)) ? (((/* implicit */unsigned long long int) var_0)) : (0ULL));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_0 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */short) arr_1 [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1223935744U)) ? (((/* implicit */unsigned long long int) var_3)) : (0ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0))))) : (285019675043131970ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) < (((/* implicit */long long int) arr_6 [19ULL])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (short)2373)) : (((/* implicit */int) var_7))))) : (775177830U)))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))) : ((+(16786878830733891674ULL)))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) var_5);
        }
    }
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    var_13 = (~(arr_0 [i_2]));
                    var_14 = ((/* implicit */_Bool) (short)-2374);
                    var_15 = ((/* implicit */_Bool) var_6);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1223935738U)) ? (((/* implicit */int) (unsigned short)18)) : (((/* implicit */int) arr_11 [i_2]))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) (-(0ULL)));
        arr_17 [i_2] = 2251799813685247LL;
    }
}
