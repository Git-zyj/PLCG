/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78409
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
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-27)))))))));
        arr_3 [i_0] [i_0] &= 4635285532317226152LL;
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31990)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(2052027465U)))) ^ (max((((((/* implicit */_Bool) 7)) ? (6993170165136270480LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32005))))), (((/* implicit */long long int) ((unsigned int) 11923015003741060650ULL)))))));
        arr_9 [i_1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */unsigned long long int) 1223457171U)) : (6208600208372543500ULL)))))))));
        arr_10 [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)25))))));
        arr_11 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2052027465U)) ? (((/* implicit */unsigned long long int) -1281866356893146656LL)) : ((((!((_Bool)0))) ? (((/* implicit */unsigned long long int) max((0U), (457003752U)))) : (max((((/* implicit */unsigned long long int) (short)23886)), (17832976391391417308ULL)))))));
        arr_12 [i_1] = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2052027460U)) ? (1223457171U) : (1223457171U))), ((((_Bool)1) ? (2052027465U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3466))) : (2242939831U)))) ? (((((/* implicit */unsigned long long int) 2907168090U)) + (4648331333531151572ULL))) : (((/* implicit */unsigned long long int) (-(4493212154392163594LL))))));
        var_21 = ((/* implicit */unsigned int) (_Bool)1);
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        for (int i_4 = 2; i_4 < 18; i_4 += 2) 
        {
            {
                arr_20 [i_4 - 2] = ((/* implicit */long long int) 11923015003741060631ULL);
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(6523729069968490944ULL)))))) ? (((/* implicit */int) (short)-10604)) : (((/* implicit */int) (_Bool)1)))))));
                arr_21 [i_4] [i_4] [i_3] = ((/* implicit */long long int) ((min(((~(1524365136U))), (((2242939831U) * (1387799206U))))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-4537)))));
            }
        } 
    } 
}
