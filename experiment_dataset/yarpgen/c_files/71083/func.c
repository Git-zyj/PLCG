/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71083
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((int) (unsigned short)27447));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8304217091020943008LL)) ? (((/* implicit */unsigned long long int) -8304217091020943026LL)) : (15388487928267509782ULL)))) ? (3540995733470803456LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) 8304217091020943019LL)))) : (((/* implicit */unsigned long long int) (~((~(arr_1 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */unsigned long long int) min(((+(3540995733470803446LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)-4876)) > (((/* implicit */int) (short)-4885)))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(arr_0 [i_1])))) ? (arr_4 [i_1]) : (min((((/* implicit */int) var_7)), (arr_4 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */int) max((-3540995733470803435LL), (((/* implicit */long long int) (short)-4876))));
        arr_8 [i_1] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) 8304217091020942980LL)), (arr_0 [i_1]))), (((/* implicit */unsigned long long int) 8304217091020943029LL))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) < (((/* implicit */int) (short)-1)))))) / (min((((/* implicit */long long int) var_3)), (var_11))))) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_2] [i_3] [i_3 - 1]))))));
            arr_13 [i_2] [i_3] = ((((/* implicit */_Bool) var_5)) ? (403778483) : (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) -3540995733470803457LL))))), (var_2)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_17 [5ULL] [i_3 - 1] = ((/* implicit */int) var_2);
                /* LoopSeq 2 */
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 2) /* same iter space */
                {
                    arr_20 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) arr_10 [i_5 - 3] [i_2])) <= (8304217091020943001LL)))));
                    var_16 = ((/* implicit */short) var_11);
                }
                for (unsigned char i_6 = 3; i_6 < 11; i_6 += 2) /* same iter space */
                {
                    arr_24 [i_6] [i_3] [i_2] = (~(((/* implicit */int) (signed char)-81)));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        arr_27 [i_7] = (+(-659919507));
                        var_17 = ((/* implicit */short) var_10);
                    }
                    for (int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned char) (-(arr_29 [i_6] [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 1])));
                        arr_31 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3540995733470803451LL)) && (((/* implicit */_Bool) (signed char)-1))));
                        arr_32 [i_2] [i_3 + 1] [i_4] [i_6] = ((/* implicit */int) var_0);
                    }
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_21 [i_3 + 1] [i_3 - 1])) : (((((/* implicit */_Bool) (unsigned short)52025)) ? (((/* implicit */int) arr_26 [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_2] [(signed char)10] [i_4])))))))));
                var_20 = ((/* implicit */unsigned char) ((arr_29 [i_2] [i_3 - 1] [i_4] [i_4] [i_4]) != (((/* implicit */int) arr_21 [i_2] [i_3 - 1]))));
            }
            var_21 |= ((/* implicit */unsigned char) arr_16 [i_3 - 1] [i_3 + 1] [i_3]);
        }
        arr_33 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */int) (short)-30552)), (659919511)))) ? (((/* implicit */unsigned long long int) arr_29 [i_2] [i_2] [i_2] [i_2] [i_2])) : (max((3241014041465799218ULL), (11471050817308147418ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) (+(var_11)))))));
        var_22 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) 6975693256401404197ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_2] [i_2])) == (arr_0 [i_2]))))))));
        var_23 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])))));
        arr_34 [10] = ((/* implicit */unsigned short) ((signed char) ((unsigned short) -1LL)));
    }
    var_24 = ((/* implicit */unsigned short) ((var_6) + ((~(((unsigned long long int) 18446744073709551615ULL))))));
    var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) (unsigned short)40240)) - (40240)))))) % (((unsigned int) 8304217091020942991LL))))) : (((((/* implicit */_Bool) (~(9177678052624394628LL)))) ? (var_12) : (var_9)))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) >= (var_6)));
    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((unsigned char) var_9)))) ? ((~(var_10))) : (var_4)));
}
