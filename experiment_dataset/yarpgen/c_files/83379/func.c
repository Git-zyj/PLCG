/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83379
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
    var_15 = ((/* implicit */signed char) var_1);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (0ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3664))) : (9223372036854775805LL)))))) : (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))));
        arr_4 [i_0] [i_0] = (signed char)-18;
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) max(((signed char)26), ((signed char)-1)));
                arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((17665659666312663743ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)35))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1)))) : (((((/* implicit */_Bool) arr_10 [i_0] [(short)24] [(_Bool)1] [(short)24])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
            }
            var_16 = ((/* implicit */short) var_2);
            arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1]))))) : (arr_6 [i_0] [i_0])))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-31)))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((17665659666312663743ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))))));
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-22614)) <= (((/* implicit */int) (signed char)-27)))) ? (((/* implicit */int) ((signed char) arr_10 [i_0] [i_1] [i_3] [20LL]))) : (((((((/* implicit */int) (signed char)-31)) > (((/* implicit */int) (unsigned short)0)))) ? (((var_5) * (((/* implicit */int) var_14)))) : (((int) (signed char)9))))));
                    }
                } 
            } 
            var_20 &= ((/* implicit */int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1671093576)), (arr_9 [i_0] [i_1] [i_1] [(unsigned short)15])))) ? (((arr_7 [i_0] [i_1]) ? (arr_23 [(signed char)22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))))) : (min((4438155185693371765ULL), (((/* implicit */unsigned long long int) -2497776947994356621LL))))))));
        }
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_16 [i_5]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_6 + 1] [17ULL] [i_6 + 1] [i_6]))));
            arr_30 [i_5] [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (short)22603))))) != (((/* implicit */int) var_4))));
            var_23 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (signed char)25)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) > (var_13))))));
        }
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_7] [16LL])))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (12675954752200009690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
            arr_34 [i_7] [12LL] [i_7] = ((/* implicit */unsigned long long int) var_2);
            var_25 = ((2000634795) >> (((14825489134607774288ULL) - (14825489134607774267ULL))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 5770789321509541923ULL)) ? (14825489134607774288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-35)))));
        }
    }
    for (long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
    {
        arr_39 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (signed char)-10))))) ? (min((arr_10 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */int) arr_7 [i_8] [i_8])))) : (((/* implicit */int) (!(arr_7 [i_8] [i_8]))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8])) ? (((/* implicit */unsigned long long int) arr_16 [i_8])) : (10741129786965468681ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((((/* implicit */int) (signed char)-79)) | (((/* implicit */int) (signed char)31)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8])))))))) : (((((((/* implicit */_Bool) arr_29 [i_8] [i_8])) || (((/* implicit */_Bool) 2855375433U)))) ? (((/* implicit */unsigned long long int) 7304016747070962326LL)) : (arr_37 [(signed char)23])))));
    }
    for (long long int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_35 [i_9] [i_9])), (min((arr_41 [3U] [i_9]), (((/* implicit */long long int) arr_7 [i_9] [i_9])))))), (((/* implicit */long long int) -720688185)))))));
        arr_44 [i_9] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (7705614286744082935ULL)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_9] [i_9])) ^ (((/* implicit */int) var_0))))) : (max((max((((/* implicit */long long int) 793028742)), (arr_41 [i_9] [i_9]))), ((~(var_9)))))));
    }
}
