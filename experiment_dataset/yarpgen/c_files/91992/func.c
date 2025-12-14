/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91992
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_2);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_2 [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
                {
                    {
                        var_15 = var_9;
                        var_16 = ((/* implicit */unsigned short) var_9);
                        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
        {
            arr_21 [i_1] [i_1] [4ULL] = ((/* implicit */int) arr_17 [i_1] [0LL] [(short)7] [i_5] [i_5]);
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 9093132604286569264LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7561))) : (var_0)));
                            var_19 = ((/* implicit */unsigned short) 6345160754841590590LL);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */long long int) (+(var_6))))));
            var_21 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */long long int) var_12)) & (1642843133503212240LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [i_5] [i_5]))) < (arr_30 [i_1] [i_1] [i_1] [i_5] [i_5]))))))));
        }
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1])))))) > (((int) (unsigned short)39592))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                for (int i_11 = 2; i_11 < 7; i_11 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                        {
                            var_23 = (!(((/* implicit */_Bool) ((unsigned int) arr_18 [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11]))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4282538346U)) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_1] [i_9 - 2] [i_12]))) <= (-6345160754841590595LL)))), (var_9))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
                        {
                            arr_44 [i_11] [i_11] = ((/* implicit */unsigned short) var_11);
                            arr_45 [i_11] [i_9 - 3] [i_9] = ((/* implicit */int) ((short) arr_33 [i_1]));
                        }
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                        {
                            var_25 = (~(var_6));
                            var_26 -= ((/* implicit */signed char) ((unsigned short) arr_48 [i_1] [i_1] [i_14] [i_14] [i_14]));
                        }
                        /* vectorizable */
                        for (short i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                        {
                            arr_51 [i_1] [i_11] [i_9] [i_11] [i_10] [i_11 - 2] [i_15] = ((/* implicit */unsigned long long int) (~(arr_36 [i_1] [i_9 - 1] [i_10])));
                            var_27 += ((/* implicit */unsigned char) arr_31 [i_1]);
                            var_28 = ((/* implicit */long long int) ((unsigned char) var_2));
                            var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17069)) ? (((/* implicit */long long int) var_7)) : (arr_42 [i_9 - 1] [i_11 - 1] [i_15] [i_9 - 1] [i_15])));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) var_10);
                            arr_54 [i_1] [i_9 - 1] [i_9 - 1] |= (+(var_11));
                        }
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 10; i_17 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */_Bool) (-(((arr_46 [i_17] [i_11] [i_10] [i_1]) << (((12559093765178185450ULL) - (12559093765178185430ULL)))))));
                            var_32 = ((/* implicit */unsigned short) (!(var_2)));
                        }
                        var_33 = ((/* implicit */unsigned long long int) -6345160754841590595LL);
                        arr_57 [i_1] [i_9] [i_10] [i_9] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)32))));
                    }
                } 
            } 
        } 
        arr_58 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
    }
    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (signed char)-1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)))))) : (min(((+(var_3))), (((/* implicit */unsigned long long int) var_8))))));
    var_35 -= ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) (unsigned short)9638)))))), (((int) (-(6345160754841590595LL))))));
    var_36 = ((/* implicit */signed char) ((unsigned long long int) 842851320));
}
