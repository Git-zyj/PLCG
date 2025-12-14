/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87112
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) (_Bool)1);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) var_1);
                            var_15 = ((/* implicit */_Bool) -5098402281390542885LL);
                            arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((long long int) ((signed char) ((_Bool) var_6))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((int) (signed char)-107));
                            var_16 = ((/* implicit */int) ((signed char) ((_Bool) var_8)));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            var_17 = ((signed char) -6085924585497487002LL);
                            var_18 = ((/* implicit */unsigned short) 6085924585497487005LL);
                        }
                        var_19 = ((unsigned char) ((signed char) var_2));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [8U] [i_3] [i_6] |= ((_Bool) ((long long int) 1103840443U));
                            var_20 = ((/* implicit */_Bool) (unsigned char)139);
                        }
                        var_21 = ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        } 
        var_22 &= ((/* implicit */unsigned short) (unsigned char)182);
        arr_20 [i_0] = ((/* implicit */long long int) ((unsigned int) ((signed char) var_3)));
        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) var_1));
    }
    for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
    {
        arr_24 [i_7 - 1] = ((/* implicit */short) ((unsigned long long int) -6085924585497487006LL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            arr_27 [i_7] [i_8] = ((/* implicit */signed char) (unsigned char)49);
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned long long int) 18446744073709551589ULL)))));
        }
        arr_28 [i_7 - 1] = ((/* implicit */unsigned short) ((unsigned int) var_10));
        arr_29 [i_7 + 2] &= ((/* implicit */signed char) ((unsigned int) var_8));
        var_25 = ((/* implicit */long long int) ((signed char) ((unsigned char) var_5)));
    }
    for (int i_9 = 0; i_9 < 21; i_9 += 3) 
    {
        var_26 -= ((/* implicit */unsigned char) 12370195937522215784ULL);
        arr_34 [i_9] = ((/* implicit */_Bool) ((unsigned short) ((signed char) ((signed char) 1179896739U))));
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) var_4)));
    }
    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        var_27 = ((/* implicit */unsigned short) var_5);
        var_28 = ((/* implicit */int) ((signed char) ((int) var_2)));
        var_29 = ((/* implicit */int) var_1);
        var_30 |= ((/* implicit */int) ((long long int) var_7));
    }
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) var_4))));
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((unsigned short) 3845328329U)))));
        var_33 = ((/* implicit */unsigned char) ((unsigned short) var_12));
    }
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_12))));
            arr_45 [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) var_8);
            var_35 = ((/* implicit */signed char) var_2);
            var_36 = ((/* implicit */unsigned int) (_Bool)1);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            arr_48 [i_12] [i_12] [(signed char)10] = ((/* implicit */unsigned char) ((signed char) var_7));
            var_37 = ((/* implicit */signed char) ((unsigned int) var_7));
        }
        arr_49 [i_12] = ((/* implicit */unsigned int) var_9);
        var_38 = ((/* implicit */unsigned int) ((long long int) var_9));
        var_39 = ((/* implicit */int) ((unsigned int) var_6));
    }
    var_40 = ((/* implicit */unsigned short) 7188252085869517624ULL);
    var_41 = ((/* implicit */unsigned int) max((var_41), (((unsigned int) (unsigned short)62745))));
    var_42 = ((/* implicit */unsigned int) var_8);
}
