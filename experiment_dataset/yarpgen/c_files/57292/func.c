/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57292
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (arr_0 [i_0])));
                    var_15 = ((/* implicit */long long int) min((var_15), (695385663336389345LL)));
                    var_16 = ((/* implicit */short) arr_0 [12ULL]);
                    var_17 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_1]);
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) 14094764781413497702ULL)) ? (var_0) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_3 = 4; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) min((14855544386918299615ULL), (((/* implicit */unsigned long long int) 21LL))))) ? (((/* implicit */long long int) ((/* implicit */int) (((+(var_8))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (-(2305702271725338624LL)))) ? (((long long int) 3591199686791252000ULL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3] [0LL])) ? (((/* implicit */unsigned long long int) var_11)) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [14ULL]))))), (max((var_8), (((/* implicit */unsigned long long int) -695385663336389334LL))))))));
        var_21 = ((/* implicit */short) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (3657124881102635076LL))) | (0LL)));
    }
    for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) ((6504840030585881795ULL) != (((/* implicit */unsigned long long int) -8814911349284507392LL)))))))));
        var_23 *= ((/* implicit */unsigned long long int) var_1);
        var_24 += ((/* implicit */signed char) (-(-1423445272986373274LL)));
    }
    var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-106))));
}
