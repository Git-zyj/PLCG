/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65677
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
    var_10 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) ((var_1) - (((/* implicit */int) var_3))))), (4294966272LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)17))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_3)) % (((/* implicit */int) (signed char)-101)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [(signed char)4] [i_0] = var_7;
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_11 = (-(-554457099));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] [i_4 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                            arr_15 [(unsigned short)5] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-79)) & (((/* implicit */int) var_3)))) / ((-(554457112)))));
                        }
                        arr_16 [(short)14] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (-(arr_1 [i_3] [i_2])));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)13823))));
                        var_13 = 3842361550152447248LL;
                    }
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) (signed char)78);
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_15 = var_8;
                            var_16 = ((/* implicit */signed char) var_3);
                            var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_2]))));
                        }
                        for (signed char i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)34);
                            arr_31 [i_0] [i_0] = ((/* implicit */int) arr_27 [i_6] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-8)) >= (((/* implicit */int) var_9))))) <= (((/* implicit */int) var_3))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)234)) <= (((/* implicit */int) (signed char)94))))) == (var_0)));
                            arr_32 [i_0] [i_0] [i_6] [i_8] = ((((/* implicit */_Bool) arr_21 [i_8 + 1] [i_8 + 1] [i_8 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) -4827446965921805058LL))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_35 [i_6] [i_2]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_2] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)));
                            var_20 = ((/* implicit */int) arr_7 [i_1] [i_1]);
                        }
                        arr_38 [i_0] = ((((((/* implicit */int) (unsigned short)13808)) % (((/* implicit */int) (signed char)-24)))) - (-554457110));
                        arr_39 [i_0] [i_1] [i_2] [i_6] [i_2] = ((/* implicit */unsigned long long int) var_1);
                    }
                    var_21 = (!(((/* implicit */_Bool) var_2)));
                    arr_40 [5] [i_1] [i_0] = ((/* implicit */unsigned short) -4463411570665472190LL);
                    arr_41 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_0])) ? (-554457109) : (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_2]))));
                    var_22 = (~(((unsigned long long int) var_3)));
                }
                for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    arr_44 [i_1] [i_1] [i_10] [i_0] = ((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_10] [i_10] [i_1]);
                    arr_45 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (+(var_1)))))));
                }
            }
        } 
    } 
}
