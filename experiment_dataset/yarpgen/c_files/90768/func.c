/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90768
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_4))), ((+(var_11)))))) ? (((/* implicit */int) (_Bool)1)) : (var_6)));
    var_14 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (var_6) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) != (var_0));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_15 = var_11;
                    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 35189521))))))));
                    arr_9 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */int) var_10);
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) ((arr_8 [i_0] [i_3] [i_0]) >= (((/* implicit */int) var_5))));
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))))));
                        var_19 = var_4;
                        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_4] [i_3]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_21 = var_8;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_22 = ((((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))) < (var_6));
                    arr_26 [i_8] [i_8] [i_6] = (!(((/* implicit */_Bool) arr_2 [i_6] [i_6 - 1] [i_8])));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (357831272939422981ULL)));
                    arr_27 [i_8] [i_7] [i_8] = ((/* implicit */_Bool) (-(var_6)));
                }
            } 
        } 
    }
}
