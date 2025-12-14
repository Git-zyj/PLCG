/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99404
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [7LL] [i_1] = ((/* implicit */int) arr_8 [i_2] [i_1 - 4] [i_0] [i_0]);
                    arr_10 [(unsigned char)0] [i_1] [(unsigned char)0] [i_2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (15135399360935986962ULL) : (((/* implicit */unsigned long long int) -4632317524861521201LL)))))))));
                }
            } 
        } 
        var_15 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(4632317524861521200LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4632317524861521201LL)))))))), (4632317524861521201LL)));
    }
    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_16 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_16 [(unsigned short)7] [i_3] [i_4])), (((arr_16 [i_3] [i_3 - 2] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (-2309379615468178950LL)))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned short)30515))));
                var_18 = ((/* implicit */_Bool) arr_12 [i_3] [i_3]);
                var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_12 [i_4] [i_5])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) + (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27)))))) : (((arr_11 [i_4] [i_4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [i_3 + 2]))) : (855603684423115669ULL)))))));
                var_20 = ((unsigned short) ((((/* implicit */_Bool) arr_15 [i_3 + 1])) ? (arr_15 [i_3 + 1]) : (arr_15 [i_3 + 1])));
            }
            for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) arr_26 [i_6 + 1] [i_4] [i_3 - 2] [16] [i_3] [i_3 - 2]);
                    var_22 -= ((/* implicit */long long int) min(((((_Bool)0) ? (((/* implicit */int) arr_22 [i_7] [i_6 + 2] [i_3 - 2] [i_3 + 1])) : (((/* implicit */int) arr_22 [i_6] [i_6 + 2] [i_3 + 2] [i_3 + 2])))), ((~(((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_12 [i_3] [i_4])))))))));
                }
                for (long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_11 [i_3] [i_4]);
                    arr_30 [i_4] [i_4] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_3 - 2] [i_3] [i_6] [i_6 + 2]))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_3 + 1] [i_4])), (var_8)))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 3643749232120892266LL))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)28)), (-111881899)))))))));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 2; i_9 < 21; i_9 += 4) 
                {
                    arr_35 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */short) arr_31 [i_3 - 1] [i_4] [i_6] [i_9]);
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_11))));
                    arr_36 [(_Bool)1] [i_4] [13] [i_9 - 1] [i_9 - 1] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (arr_19 [2] [i_4])))) & (15647608124040993188ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? ((~(((/* implicit */int) (unsigned short)3759)))) : (((((/* implicit */_Bool) -3643749232120892284LL)) ? (((/* implicit */int) var_9)) : (-488263967))))))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((unsigned int) arr_32 [i_9 - 1] [(signed char)8] [i_3 + 1] [i_6 - 1])))));
                }
            }
            arr_37 [i_4] [i_3 - 2] [3] = ((/* implicit */long long int) max((((arr_16 [i_3] [i_3 + 2] [i_4]) ? (var_12) : (((/* implicit */unsigned long long int) 4632317524861521201LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 488263975)), (3643749232120892285LL))))));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) -1511138124)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)19)) >> (((((/* implicit */int) var_10)) + (71))))) < (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1432174100))))), (-3392752542779268141LL)))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) -4632317524861521201LL)) || (((/* implicit */_Bool) -648921160))))) << ((((+(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_10)))))) + (78)))));
        }
        arr_38 [i_3] = ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) -488263987)), (arr_31 [8LL] [i_3] [15LL] [i_3]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [13ULL] [i_3 - 1] [i_3] [i_3])))))))) ? (((arr_18 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3]) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3 + 1] [i_3])) : (((/* implicit */int) (unsigned char)227)))) : (((/* implicit */int) ((unsigned char) var_0)))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_3]) << (((min((((/* implicit */unsigned long long int) (unsigned short)37181)), (arr_33 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 2]))) - (37179ULL)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)227)), (-1511138137)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_13))))) : (max((((/* implicit */unsigned long long int) arr_21 [i_3 - 1] [i_3] [i_3])), (arr_23 [8ULL] [(unsigned short)20] [i_3 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(-7954514263404817154LL))))))));
    }
    var_28 = ((/* implicit */signed char) var_13);
    var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */int) (short)-14551)) * (((/* implicit */int) var_14))))));
    var_30 += ((/* implicit */_Bool) var_5);
    var_31 &= ((/* implicit */_Bool) ((unsigned char) min((((((-4632317524861521202LL) + (9223372036854775807LL))) >> (((-394815375) + (394815411))))), (-1LL))));
}
