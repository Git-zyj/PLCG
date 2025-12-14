/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76354
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
    var_10 = var_2;
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_11 = 13510798882111488LL;
        var_12 = var_8;
        var_13 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) - (min((((/* implicit */long long int) ((-4588706290399531252LL) <= (arr_0 [i_0])))), (((var_8) | (2391259619012940067LL))))));
        var_14 = ((((/* implicit */_Bool) ((72057525318451200LL) + (min((7047358345530304520LL), (7723257869025009998LL)))))) ? (var_6) : (((arr_0 [19LL]) << (((/* implicit */int) ((var_4) <= (arr_1 [i_0])))))));
    }
    for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) max((var_15), (max((((var_9) - (arr_1 [i_1 + 1]))), (((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (arr_1 [i_1 + 1]) : (-2970854664858752583LL)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (var_1) : (arr_13 [i_2])))))))));
                                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(max((var_4), (8321637920892939575LL))))))));
                                var_18 = ((max((2251799813684992LL), (arr_5 [i_1 - 2] [i_1]))) | (arr_5 [i_1 - 2] [i_1]));
                                var_19 = min((min((max((arr_4 [i_2] [i_3] [i_5]), (0LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_5]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8263802288600548309LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1341978026266577440LL)) ? (((arr_9 [i_1] [i_2] [i_1]) + (-2582519787318077709LL))) : (((((/* implicit */_Bool) -2604821244185189760LL)) ? (arr_14 [i_1] [i_1 + 1] [i_3] [i_3] [i_3] [i_3]) : (562949953421296LL))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((arr_5 [i_1] [i_6]) << (((((-7859489958889099855LL) + (7859489958889099865LL))) - (10LL)))))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((long long int) ((((/* implicit */_Bool) arr_6 [i_6] [i_1 + 1])) ? (arr_6 [i_6] [i_1 - 2]) : (var_2))))));
                        var_23 ^= 961676061030567171LL;
                        arr_24 [i_1] [i_6] [i_1] [i_7] [10LL] [8LL] = (~(-7922601166818246826LL));
                    }
                } 
            } 
        } 
        arr_25 [i_1] = var_2;
    }
    for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        var_24 = max((((((/* implicit */_Bool) 6549005713317992531LL)) ? (var_6) : (arr_26 [i_9] [i_9]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_9] [i_9]))))));
        var_25 ^= min((((arr_1 [i_9]) ^ (min((-5031138637112094377LL), (177626540276500571LL))))), (max((arr_1 [i_9]), (var_7))));
        var_26 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-8741411886177384454LL) : (arr_27 [12LL] [i_9])))) ? (6164173246808899632LL) : (((((/* implicit */_Bool) -2251799813684982LL)) ? (-2050552203643809930LL) : (2199023255520LL))))));
    }
}
