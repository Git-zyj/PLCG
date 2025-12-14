/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99393
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_9))));
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) var_0)) >> (min((((/* implicit */unsigned int) ((33550336) == (((/* implicit */int) var_2))))), (var_7)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)4])))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(3716571308U)))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                    var_16 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1868873620)) || (((/* implicit */_Bool) var_3)))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [12U]))) | (((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-8499843671634188382LL)))))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483636)) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (var_7)))), (min((7089416177077823133LL), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) min(((~(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0])))))));
            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [(unsigned short)6])) % (((/* implicit */int) arr_6 [i_0] [i_0 + 1]))))) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_3 [i_0] [8])) ? (((/* implicit */int) arr_10 [i_0] [i_0 - 2] [(unsigned short)12])) : (((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-2147483621)))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_2 [0U] [i_4 + 1])))) : (((/* implicit */unsigned long long int) 2147483636)))))));
            var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) min((507904U), (((/* implicit */unsigned int) (short)28578)))))))), ((~(((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0]))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) > (1842378964)));
        }
        /* LoopNest 3 */
        for (long long int i_5 = 1; i_5 < 11; i_5 += 1) 
        {
            for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (arr_15 [i_5 + 3] [i_5])))) >> (((min((((/* implicit */long long int) -377652894)), (8499843671634188382LL))) + (377652921LL)))));
                        arr_22 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? ((-((~(8499843671634188391LL))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_5])) - (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) arr_13 [i_6] [i_0])) : (min((8499843671634188381LL), (-1642891499077041903LL)))))));
                        var_24 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_7])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_12 [i_7])))) ^ (((((/* implicit */_Bool) arr_12 [i_7])) ? (((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_5]))))));
                        var_25 = ((((/* implicit */int) arr_14 [i_0 + 1])) << (((((/* implicit */int) var_5)) + (115))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) < (arr_19 [i_6 + 1] [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */int) ((unsigned short) (!((_Bool)1)))))));
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_8 [i_0] [i_0])))) ? ((-(((/* implicit */int) (signed char)112)))) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_0 - 1]))))), (((min((var_8), (((/* implicit */unsigned int) (_Bool)0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) arr_14 [i_0]))))))))));
    }
}
