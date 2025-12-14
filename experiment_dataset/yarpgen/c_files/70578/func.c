/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70578
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_11 = ((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))))), (min((((/* implicit */short) (!(var_0)))), (max((arr_2 [i_0]), (((/* implicit */short) (_Bool)1))))))));
            arr_7 [i_0] [i_0] = ((((((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) <= (((/* implicit */int) arr_2 [i_1])))) ? (max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_9))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))));
            arr_8 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((_Bool) -3193651548035132114LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(short)16] [i_0])))))) : (max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_1])))))) : (((/* implicit */unsigned long long int) (+(-3193651548035132132LL))))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max((var_2), (((/* implicit */unsigned short) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_2]) <= (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))))) : (min((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
            var_13 -= ((/* implicit */short) var_0);
            var_14 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (arr_5 [i_2])))))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_2))))), (max((((/* implicit */short) var_0)), (arr_6 [i_2] [i_0] [i_0])))))) : (((/* implicit */int) min((max((var_1), (((/* implicit */unsigned short) arr_11 [i_0] [i_0])))), (((/* implicit */unsigned short) var_6)))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        {
                            arr_18 [(_Bool)1] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */short) var_3);
                            var_15 = arr_3 [i_0];
                            arr_19 [i_4] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */short) min((max((((/* implicit */long long int) var_6)), ((+(arr_17 [i_3] [i_3] [i_4 - 1] [i_4] [(unsigned char)10] [i_3] [i_4 - 1]))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_5))))) <= (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
            } 
        }
        arr_20 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_7] [i_6] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) var_3)), (arr_17 [i_6] [i_6 + 1] [(short)10] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                        var_16 = ((/* implicit */short) var_10);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (var_3)))) ? (((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_9] [i_9] [i_9])) <= (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [8LL] [i_9] [i_9]))))))) <= (((/* implicit */int) arr_25 [i_9]))));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 13; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                {
                    arr_35 [i_9] [i_9] [i_9] [i_9] = ((unsigned short) var_6);
                    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (max((3193651548035132114LL), (((/* implicit */long long int) (_Bool)1)))))))));
                    arr_36 [i_9] [i_10] [(_Bool)1] = ((/* implicit */_Bool) var_8);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_1))));
                    arr_37 [i_11] [i_9] [i_9] [6ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_9] [i_10] [(_Bool)0])) ? (min((((var_10) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))), (((/* implicit */int) min((arr_1 [i_9]), (var_10)))))) : (((/* implicit */int) var_6))));
                }
            } 
        } 
        var_20 += ((/* implicit */unsigned short) min(((+(min((((/* implicit */unsigned int) (_Bool)1)), (4117609457U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
        var_21 = ((/* implicit */unsigned short) arr_33 [i_9] [i_9] [i_9] [i_9]);
    }
    for (unsigned char i_12 = 3; i_12 < 18; i_12 += 3) 
    {
        arr_41 [i_12] = var_5;
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_44 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) 2978825403U)))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)3639)))) <= (((/* implicit */int) (short)-32765))))) <= (((/* implicit */int) (short)-14881))));
        }
    }
    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)511)) ? (-3480243518484730924LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
}
