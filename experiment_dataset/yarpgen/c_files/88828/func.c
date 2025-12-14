/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88828
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (!(var_13)))))) != (((/* implicit */int) max(((!(((/* implicit */_Bool) var_10)))), ((_Bool)1))))));
                    var_15 ^= ((/* implicit */unsigned char) var_11);
                    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)39)) * (((/* implicit */int) (signed char)39))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_1] [i_0])), ((short)24327)))) >= ((~(((/* implicit */int) var_2))))))), (((unsigned short) (signed char)5))));
                }
            } 
        } 
        var_17 = ((/* implicit */int) ((unsigned long long int) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_18 = ((/* implicit */int) min((min((17891034953346882553ULL), (((/* implicit */unsigned long long int) (short)-32759)))), (((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) (_Bool)1))))))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) 7384592775159193869ULL);
        var_20 = (~(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)39)), (max(((unsigned short)26742), (((/* implicit */unsigned short) arr_9 [i_3]))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_21 = (-(var_8));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            var_22 += arr_0 [i_5] [i_6];
                            arr_24 [i_6] [i_6] [4] [i_6] [i_6] [i_6] [i_4] = (unsigned char)213;
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_13))))) << (((((((/* implicit */int) arr_11 [(unsigned char)0])) << (((((/* implicit */int) var_12)) - (4964))))) - (3278))))) << (((max((((unsigned int) var_1)), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)96)), (var_12)))))) - (2519809028U)))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_7 [i_6] [i_5] [i_3] [i_3]))));
                        }
                        for (int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((min((var_8), (((/* implicit */int) arr_22 [i_3] [i_3] [i_4] [i_3] [i_6] [i_6] [i_8])))) ^ (((arr_6 [i_3] [i_4] [i_6] [i_8]) * (((/* implicit */int) arr_22 [i_8] [i_4] [i_4] [i_4] [(signed char)1] [i_8] [i_3])))))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (signed char)5))));
                            arr_29 [i_3] [i_4] [i_4] [i_3] [i_3] = max((2840947469331848091ULL), (((/* implicit */unsigned long long int) (_Bool)0)));
                            arr_30 [i_4] [i_4] [i_5] [i_5] [i_6] [(unsigned short)4] [i_8] = ((/* implicit */short) (((+(((/* implicit */int) var_10)))) ^ (arr_28 [i_3] [i_4] [i_4] [i_6] [i_8])));
                        }
                        var_27 = ((/* implicit */unsigned int) (signed char)-40);
                        var_28 = ((/* implicit */int) arr_11 [i_3]);
                        var_29 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (18204173214909247693ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)92)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 4992584743857048359ULL)) && (((/* implicit */_Bool) 242570858800303922ULL))))));
                        var_31 = (_Bool)1;
                        var_32 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (short)32755)))))));
                    }
                    arr_35 [i_4] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) * (max((((/* implicit */unsigned long long int) var_7)), (18204173214909247684ULL)))));
                    var_33 = ((/* implicit */unsigned long long int) ((2443594352325879807ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253)))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) 4992584743857048370ULL);
    }
    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
    {
        var_35 = ((/* implicit */int) ((short) (_Bool)1));
        var_36 = ((/* implicit */signed char) (unsigned char)19);
        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) 886351281U))));
        var_38 = ((/* implicit */unsigned char) min(((+(var_0))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26050)))))));
    }
    var_39 = ((/* implicit */short) min((13454159329852503259ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_40 = ((/* implicit */short) var_9);
    var_41 = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */_Bool) (unsigned short)38751)) ? (((/* implicit */int) (short)25675)) : (((/* implicit */int) var_6)))))));
}
