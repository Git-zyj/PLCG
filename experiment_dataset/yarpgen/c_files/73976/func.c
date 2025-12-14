/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73976
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
    var_14 = ((/* implicit */long long int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned char) min((6866342142465916941ULL), (((/* implicit */unsigned long long int) -300705811))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_16 = (!(((/* implicit */_Bool) min((var_6), ((+(((/* implicit */int) var_4))))))));
            arr_4 [i_0] [13] = ((/* implicit */unsigned int) (-(arr_0 [(unsigned char)14])));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
            arr_8 [i_2] = ((/* implicit */short) var_7);
        }
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5059))))) ? (arr_10 [i_3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) var_12)))))));
            var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) (+(-6)))) : (arr_6 [i_3] [i_3])));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned int) var_4);
                            var_20 = (!(((/* implicit */_Bool) (unsigned short)60461)));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            var_21 = ((/* implicit */short) (-(17233588570674930727ULL)));
            arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_10)), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) : (arr_10 [i_0])));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 20; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 21; i_9 += 4) 
            {
                for (int i_10 = 2; i_10 < 20; i_10 += 2) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (9223372036854775807LL)));
                        var_23 |= ((/* implicit */unsigned long long int) var_10);
                        var_24 = var_2;
                        arr_29 [i_0] [i_8] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)63055))));
                    }
                } 
            } 
            arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_1 [i_0] [i_8])));
        }
        var_25 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) -7))))));
    }
    for (int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
    {
        arr_33 [i_11] = ((/* implicit */signed char) var_10);
        var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_0 [i_11]) : (var_11))))))), (var_12)));
        arr_34 [i_11] = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) arr_2 [i_11] [i_11])) : (((/* implicit */int) arr_25 [i_11] [i_11] [i_11]))))), (arr_19 [i_11] [i_11] [i_11]))))));
        var_27 = var_5;
    }
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58652)) ? (((/* implicit */int) (unsigned char)254)) : (-1495793799)));
}
