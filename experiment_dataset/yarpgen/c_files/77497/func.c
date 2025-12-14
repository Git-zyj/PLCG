/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77497
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
    var_19 = (+(8638956537343216596ULL));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = 7857647257333979995LL;
                arr_8 [21LL] [i_0] [i_1] = ((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(arr_6 [i_0] [i_0] [i_1]))) : (((unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_0 - 1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((var_4) / (((/* implicit */unsigned long long int) var_9)))), (((((/* implicit */_Bool) (-(var_0)))) ? (var_0) : (((unsigned long long int) 17629391711249709030ULL))))));
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_21 &= ((long long int) arr_9 [i_2] [10LL]);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) 8852448756183931044LL))));
        arr_11 [i_2] [i_2] = 36028797002186752LL;
        arr_12 [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [7ULL] [22LL] [i_2])) ? (((((/* implicit */_Bool) 36028797002186752LL)) ? (var_17) : (-4630030394071221014LL))) : (arr_3 [21LL])))), (((((/* implicit */_Bool) (-(arr_3 [i_2])))) ? (((/* implicit */unsigned long long int) arr_9 [8LL] [7LL])) : (((var_6) * (15464729479903978320ULL))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        var_23 &= -8852448756183931050LL;
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_24 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_3])) < (min((((/* implicit */unsigned long long int) var_18)), (10967670779417455868ULL))))))) : (min((arr_4 [i_3 + 1] [i_3 + 1] [16LL]), (arr_4 [i_3] [i_4] [7ULL]))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) ((unsigned long long int) ((16ULL) + (11249176445635043840ULL))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 536870896LL))))), (arr_21 [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_12))) <= (var_6)))))))));
                    var_26 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) 0ULL)) ? (7479073294292095746ULL) : (((/* implicit */unsigned long long int) var_8)))), (min((7479073294292095748ULL), (((/* implicit */unsigned long long int) var_2)))))) < (((unsigned long long int) (!(((/* implicit */_Bool) -8852448756183931044LL)))))));
                    var_27 *= ((/* implicit */unsigned long long int) 8852448756183931044LL);
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 4; i_6 < 22; i_6 += 4) 
    {
        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7479073294292095748ULL)) ? (36028797002186752LL) : (arr_5 [i_6])))) ? (((long long int) arr_5 [i_6])) : (-2532850751107785429LL))))));
        var_29 *= 6954145644342647546ULL;
    }
}
