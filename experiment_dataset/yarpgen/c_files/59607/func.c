/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59607
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) var_8);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)89))))) : (var_9)));
    }
    for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_10 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3592592772054145096LL)) ? (var_2) : (((/* implicit */long long int) arr_0 [i_1 - 2] [i_1]))))))))));
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (short)15368))))))));
    }
    /* vectorizable */
    for (short i_2 = 3; i_2 < 23; i_2 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_0))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (var_3)));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~((+(var_7))))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_1)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
                    }
                } 
            } 
            var_16 = ((/* implicit */long long int) (_Bool)1);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_18 [i_2 - 2] = ((/* implicit */unsigned int) var_2);
            /* LoopNest 3 */
            for (signed char i_7 = 2; i_7 < 23; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_17 *= ((/* implicit */unsigned long long int) arr_27 [i_8 + 1] [i_7 - 2] [i_6]);
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 3] [i_6]))) : (((((/* implicit */_Bool) var_8)) ? (7549492413609338209LL) : (var_2)))));
                            var_19 += ((/* implicit */signed char) var_2);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */unsigned char) ((2432606704965410135ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 3])))));
        }
        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            arr_31 [i_2] = ((/* implicit */signed char) (+(var_9)));
            arr_32 [i_10] [i_2 - 3] = ((/* implicit */int) var_3);
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 4; i_12 < 20; i_12 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) 18038633991613543548ULL))));
                        var_22 = ((/* implicit */unsigned char) arr_39 [i_2] [i_2] [i_2] [i_2]);
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 3; i_13 < 22; i_13 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) (+((+(arr_17 [i_10])))));
                            arr_43 [i_2] [i_13] [i_13] [i_2] [i_2] = ((/* implicit */signed char) var_6);
                        }
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_2 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_2 - 1]))) : (var_3)));
                        var_25 = ((/* implicit */long long int) (unsigned char)69);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_14 = 2; i_14 < 23; i_14 += 2) 
            {
                for (int i_15 = 1; i_15 < 22; i_15 += 1) 
                {
                    for (long long int i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) min((var_26), (arr_48 [i_2] [i_10] [i_10] [i_10])));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_51 [i_2 - 2])))) > (arr_9 [i_2 + 1]))))));
                            var_28 = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)239)) ? (var_7) : (((/* implicit */int) (unsigned char)8))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_2 - 3]))));
            var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) | (((arr_20 [i_2] [i_17] [(signed char)1] [(_Bool)1]) ? (arr_38 [i_17 - 1] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_2 - 1])) ? ((-(var_2))) : (((/* implicit */long long int) (+(arr_12 [i_17] [i_2 + 1] [i_2 + 1]))))));
        }
    }
    var_33 += ((((((/* implicit */int) var_5)) | (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)69)))))) | (((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned char i_18 = 2; i_18 < 22; i_18 += 2) 
    {
        for (int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            {
                var_34 = (~(((((/* implicit */_Bool) (-(arr_28 [i_18 + 1] [i_19] [i_18 - 2] [i_19] [i_19])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_11 [i_18] [i_19])))));
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned int) min((var_2), (var_1))))), (min((arr_59 [i_18] [i_19] [i_19]), (((/* implicit */long long int) var_9)))))))));
                var_36 = ((/* implicit */_Bool) min((var_36), (arr_20 [i_18 - 1] [i_19] [i_19] [i_18 - 1])));
                var_37 = max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -8265305783372969074LL)) && (((/* implicit */_Bool) arr_30 [i_18] [i_19] [i_19])))))) * (min((8388607LL), (264644894403072672LL))))), (((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)155)))), ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
