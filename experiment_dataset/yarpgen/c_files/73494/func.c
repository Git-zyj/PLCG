/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73494
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [(short)6] &= ((/* implicit */int) min(((short)18609), (((/* implicit */short) arr_1 [(signed char)2]))));
        var_19 = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) << (((arr_0 [i_0]) - (1498493945U))))) << (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_0])) << (((((arr_0 [i_0]) - (1498493945U))) - (233297495U))))) << (((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? ((+(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) | (4466392312112166935LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20795)) ^ (((/* implicit */int) (short)-3655))))))) / (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_2])) * (((/* implicit */int) arr_4 [i_1] [i_2])))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) arr_6 [i_1])) : (min((0LL), (((/* implicit */long long int) (unsigned short)20795))))));
            var_22 &= ((/* implicit */unsigned char) arr_5 [(short)8] [(short)8]);
        }
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) /* same iter space */
        {
            var_23 |= ((/* implicit */short) var_16);
            var_24 = ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_4 [i_1] [i_3])))))) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16961))));
        }
        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            arr_14 [i_1] [10LL] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (short)3655))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 4830012764665012383ULL)) ? (((/* implicit */int) (unsigned short)44719)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44741)) ? (((/* implicit */unsigned long long int) -59130820)) : (4830012764665012404ULL)))) || ((!(((/* implicit */_Bool) var_2))))))))))));
            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44741))) / (var_10))) : (((arr_4 [i_1] [i_4]) ? (4830012764665012404ULL) : (6619122307004244728ULL)))))) ? ((~(((unsigned long long int) arr_7 [(signed char)7])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20817)))));
        }
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)3)) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_10 [i_1] [i_5] [i_5]))))))) | ((+(((/* implicit */int) (unsigned short)44741))))));
            arr_17 [i_1] [i_1] = ((/* implicit */signed char) ((arr_11 [i_1] [i_5] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)44719)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44719))) : (5210676017900087900ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44719)))))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        arr_25 [i_1] [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_7] [i_8])) ? (((/* implicit */int) arr_21 [i_8] [i_1] [i_1] [i_1])) : ((+(((((/* implicit */_Bool) arr_24 [i_1] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44719))))))));
                        arr_26 [i_1] = ((/* implicit */signed char) arr_19 [i_1] [i_8] [i_7 - 1]);
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-20911)) ? (var_9) : (((/* implicit */int) (_Bool)1))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)0))))));
    var_29 &= var_0;
}
