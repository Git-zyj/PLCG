/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74412
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_0]))) == (((/* implicit */int) (signed char)110))))) <= (((/* implicit */int) (signed char)-110))));
            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (((((/* implicit */unsigned int) var_0)) ^ (max((arr_0 [i_0] [i_1]), (arr_1 [i_0])))))));
            var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((unsigned int) arr_4 [i_1] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [5])) ? (var_1) : (((/* implicit */int) (signed char)97))))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_14 += ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((int) (signed char)110))) ? (((int) (signed char)110)) : (((/* implicit */int) arr_14 [4ULL] [i_1] [3] [(unsigned char)6])))));
                        var_15 = ((/* implicit */signed char) arr_2 [i_1]);
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) (signed char)110);
        }
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] &= arr_8 [i_4 + 1] [i_4] [i_4] [i_4];
                        arr_24 [i_0] [i_4] [i_4] [i_0] [i_4] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_5]))));
                    }
                } 
            } 
            arr_25 [(signed char)0] [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */int) (_Bool)1)) + (-172155107)))))), (2305843009212645376ULL)));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [(_Bool)0] [(_Bool)0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 172155106))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)223)) ? (172155107) : (508)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_31 [i_9] [i_0] [i_7] [i_7] [i_4] [i_0]) : (((((/* implicit */_Bool) arr_32 [i_7] [i_8] [i_7] [(signed char)11] [(signed char)11])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)55)))))))));
                        }
                    } 
                } 
                var_18 |= ((/* implicit */unsigned short) (signed char)-111);
                var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned char)96))))));
            }
        }
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)190);
        var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)234))))), (((((/* implicit */_Bool) 172155106)) ? (((/* implicit */int) (unsigned char)63)) : (536346624))))) + (((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        var_21 *= ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) ((arr_38 [i_10] [i_10]) == (arr_38 [i_10] [i_10])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)112)) || (((/* implicit */_Bool) arr_37 [i_10]))))));
        arr_40 [i_10] = ((/* implicit */int) arr_38 [i_10] [i_10]);
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)4))));
        arr_41 [4] [i_10] = ((/* implicit */int) ((signed char) ((((/* implicit */int) ((125829120) >= (-489)))) + (min((1629740045), (((/* implicit */int) (unsigned char)32)))))));
    }
    var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 536805376)) ? (((/* implicit */unsigned long long int) 2058661733)) : (13510798882111488ULL)));
}
