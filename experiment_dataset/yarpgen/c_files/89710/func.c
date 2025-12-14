/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89710
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] [i_1] = -5705284867274594831LL;
                    var_16 -= arr_6 [i_2 - 1] [i_2] [i_2 - 2];
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 1190804011849289426LL)) ? (arr_6 [i_2 - 2] [i_2] [i_1]) : (max((7261865630512955884ULL), (6320172449865630583ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (-9223372036854775795LL) : (4412612494140201045LL)))))))));
                    arr_9 [i_2] [i_2] = min((((((arr_7 [i_2] [i_1] [i_0] [i_0]) == (((/* implicit */unsigned long long int) 5705284867274594831LL)))) ? (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])) : (6144504593194536756ULL))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] = var_11;
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_18 &= min((((/* implicit */unsigned long long int) ((((unsigned long long int) var_9)) < (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))))), (((((_Bool) (_Bool)0)) ? (arr_2 [i_3]) : (((/* implicit */unsigned long long int) 5705284867274594816LL)))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_7))));
                        var_20 = ((((/* implicit */_Bool) max((2017612633061982208ULL), (arr_6 [i_4 - 1] [i_5] [(_Bool)0])))) ? ((-(0ULL))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
                    }
                } 
            } 
            arr_18 [i_0] = (_Bool)1;
            var_21 ^= max((((/* implicit */unsigned long long int) (_Bool)1)), (8722032147783493642ULL));
        }
        arr_19 [i_0] &= ((/* implicit */_Bool) arr_4 [i_0]);
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
    {
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) -8398738378254276615LL)) ? (-9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))))), (((long long int) 15ULL))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_33 [i_7] [i_9] = (-(((long long int) ((((/* implicit */_Bool) arr_15 [6LL] [i_8 - 1])) ? (8678527942436268491LL) : (2946305330702382013LL)))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = 17377933847595343823ULL;
                    }
                } 
            } 
        } 
        arr_35 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_26 [(_Bool)1])))) == ((+(arr_27 [i_6] [i_6] [i_6] [i_6])))));
    }
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_15))));
}
