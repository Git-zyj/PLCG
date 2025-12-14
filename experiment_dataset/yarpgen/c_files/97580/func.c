/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97580
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
    var_10 = ((/* implicit */long long int) var_6);
    var_11 = ((/* implicit */unsigned char) ((-448706643) | (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((int) (_Bool)0))), (((var_4) ? (var_2) : (4294967279U))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((4294967279U) | (((/* implicit */unsigned int) -448706643)))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (var_2)))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_8))))) > (17U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) (+(((int) -40173618))));
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4134795811U)) ? (arr_7 [i_1]) : (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (var_6))))));
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_8 [i_1])), (((((((/* implicit */_Bool) (unsigned char)64)) && ((_Bool)1))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967271U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_1 [i_5]), (arr_1 [i_2])))), (((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_1 [i_2]))))));
                                var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2]))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_3)) - (191)))))) ? (max((2724807724812131211ULL), (((/* implicit */unsigned long long int) arr_1 [(signed char)6])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19931)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (var_2))))))));
                                var_18 = ((/* implicit */short) (~(((((/* implicit */int) arr_6 [i_2] [i_2])) * (((/* implicit */int) min((var_5), (((/* implicit */short) (unsigned char)52)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) var_2);
                    arr_21 [i_2] [i_3 - 1] [i_4 + 2] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), ((((_Bool)1) ? (1537607361) : (((/* implicit */int) (unsigned char)244))))));
                }
            } 
        } 
        var_19 = ((unsigned int) 1574022934198906705LL);
    }
    var_20 |= ((/* implicit */int) var_4);
}
